-module(binson_writer_eqc).

% include some quickcheck headers
-include_lib("eqc/include/eqc.hrl").
-include_lib("eqc/include/eqc_statem.hrl").

% include the eqc-c generated header
-include("binson_light.hrl").

% include binson defines
-include("binson_def.hrl").

-compile(export_all).

% record defining state of QuickCheck model of binson writer
-record(state, {
    buf_size,    % size of binson writer buffer, initial value: 0
    buf_ptr,     % pointer to allocated buffer,  initial value: undefined
    writer_ptr,  % pointer to allocated binson_writer structure, initial value: undefined
    data_counter % number of buffer bytes used,
                 % (could be greater than allocated buffer size when buffer overflows),
                 % initial value: 0
}).

% Test writer function - perform N tests
test_writer(N) -> eqc:quickcheck(eqc:numtests(N, prop_writer())).

% Repeat last faulty test for writer function
retest_writer() -> eqc:check(prop_writer()).

% Compile and load the binson_light C code with as an Erlang module 'binson_light',
setup() ->
    eqc_c:start(binson_light, [{c_src, "../../binson_light.c"}, {cppflags, "-I ../../ -std=c99"}, {cflags,"-O2"}]).

% Property function - it connects model commands with test start, execution, clean-up and execution statistics.
% EQC engine is using this function for model execution (look at test_writer/1, retest_writer/0 functions).
prop_writer() ->
    case code:which(binson_light) of
        non_existing -> setup();
        _ -> ok
    end,
    ?FORALL(Cmds, commands(?MODULE),
        aggregate(command_names(Cmds),
            begin
                {H, S, Res} = run_commands(?MODULE, Cmds),
                case S#state.buf_ptr of
                    undefined -> ok;
                    Buf_ptr -> eqc_c:free(Buf_ptr)
                end,
                case S#state.writer_ptr of
                    undefined -> ok;
                    Writer_ptr -> eqc_c:free(Writer_ptr)
                end,
                eqc_statem:pretty_commands(?MODULE,
                                           Cmds,
                                           {H, S, Res},
                                           eqc:equals(Res, ok)
                                           )
            end)).

% Binson writer C implementation includes number of similar binson_write_* functions,
% model command for testing them was unified,
% binson_writer_types() returns lists of function names (as Erlang atoms)
binson_writer_types() ->
   [
      binson_write_object_begin,
      binson_write_object_end,
      binson_write_array_begin,
      binson_write_array_end,
      binson_write_boolean,
      binson_write_integer,
      binson_write_double,
      binson_write_string,
      binson_write_name,
      binson_write_string_with_len,
      %binson_write_string_bbuf,
      binson_write_bytes
   ].

% Additional QC data generators for binson_write* functions arguments

integer_gen() -> oneof([choose(-?BOUND8, ?BOUND8),
                        choose(-?BOUND16, ?BOUND16),
                        choose(-?BOUND32, ?BOUND32),
                        largeint()]).
size_gen() -> oneof([nat(), choose(1, ?MAX_BINSON_SIZE)]).

string_gen()  -> ?LET(S, size_gen(), noshrink(vector(S, choose($A, $Z)))).
binary_gen()  -> ?LET(S, size_gen(), noshrink(binary(S))).

% binson_arg_gen/1 function returns list of arguments for each tested binson_write_* function
% first (constant) argument "binson_writer *pw" is added just before command execution
% rest of arguments (if any) are random values genarated by QC generators from eqc_gen module
binson_arg_gen(binson_write_object_begin) -> [];
binson_arg_gen(binson_write_object_end)   -> [];
binson_arg_gen(binson_write_array_begin)  -> [];
binson_arg_gen(binson_write_array_end)    -> [];
binson_arg_gen(binson_write_boolean)      -> [eqc_gen:oneof([0,1])];
binson_arg_gen(binson_write_integer)      -> [integer_gen()];
binson_arg_gen(binson_write_double)       -> [eqc_gen:real()];
binson_arg_gen(binson_write_string)       -> [string_gen()];
binson_arg_gen(binson_write_name)         -> [string_gen()];
binson_arg_gen(binson_write_string_with_len) -> ?LET(Str, string_gen(), [Str, length(Str)]);
binson_arg_gen(binson_write_bytes)        -> ?LET(Bin, binary_gen(), [Bin, byte_size(Bin)]).

% binson_encoder/2 is function returning binary data representing encoding of given binson item
% argument #1 - type of binson_write_* function,
% argument #2 - actual arguments list for given function (data generated by generators from binson_arg_gen/1)
% binson_def.hrl - defines binson opcodes and bonduaries for lengths
binson_encoder(binson_write_object_begin, []) -> <<?BEGIN_OBJ>>;
binson_encoder(binson_write_object_end, [])   -> <<?END_OBJ>>;
binson_encoder(binson_write_array_begin, [])  -> <<?BEGIN_ARR>>;
binson_encoder(binson_write_array_end, [])    -> <<?END_ARR>>;
binson_encoder(binson_write_boolean, [0])     -> <<?FALSE>>;
binson_encoder(binson_write_boolean, [1])     -> <<?TRUE>>;
binson_encoder(binson_write_integer, [Int])   ->
   if
      Int >= -?BOUND8  andalso Int < ?BOUND8  -> <<?INT8,  Int:8/integer-little>>;
      Int >= -?BOUND16 andalso Int < ?BOUND16 -> <<?INT16, Int:16/integer-little>>;
      Int >= -?BOUND32 andalso Int < ?BOUND32 -> <<?INT32, Int:32/integer-little>>;
      true                                    -> <<?INT64, Int:64/integer-little>>
   end;
binson_encoder(binson_write_double, [Float])  -> <<?DOUBLE, Float/float-little>>;
binson_encoder(binson_write_string, [String]) ->
   Binary = list_to_binary(String),
   Len = byte_size(Binary),
   if
      Len < 16#80   -> <<?STR_LEN8,  Len:8/integer-little,  Binary/binary>>;
      Len < 16#8000 -> <<?STR_LEN16, Len:16/integer-little, Binary/binary>>;
      true           -> <<?STR_LEN32, Len:32/integer-little, Binary/binary>>
   end;
binson_encoder(binson_write_name, [String]) ->
   binson_encoder(binson_write_string, [String]);
binson_encoder(binson_write_string_with_len, [String, Len]) ->
   binson_encoder(binson_write_string, [lists:sublist(String, Len)]);
binson_encoder(binson_write_bytes, [Bytes, Len]) ->
   if
      Len < 16#80   -> <<?BYTE_LEN8,  Len:8/integer-little,  Bytes/binary>>;
      Len < 16#8000 -> <<?BYTE_LEN16, Len:16/integer-little, Bytes/binary>>;
      true           -> <<?BYTE_LEN32, Len:32/integer-little, Bytes/binary>>
   end.



% First QC API callback function: called before start of each test: returning initial state.
initial_state() -> #state{buf_size = 0, data_counter = 0}.

% QC API callback function which specifies the distribution with which commands are generated.
weight(_S, binson_writer_reset) -> 1;
weight(_S, binson_writer_get_counter) -> 5;
weight(_S, _) -> 10.

% QC model command "binson_alloc_buf" for allocating binson buffer of random length.
% It is not testing yet binson_writer but it was convenient to separate this stage.
% precondition: buffer size = 0 (initial state)
binson_alloc_buf_pre(State) -> State#state.buf_size == 0.
% argument: size_gen()
binson_alloc_buf_args(_State) -> [size_gen()].
% command execution: allocating buffer of given length
binson_alloc_buf(Buf_size) -> eqc_c:alloc({array, Buf_size, unsigned_char}).
% post condition: success if eqc_c:alloc returns pointer to buffer, false otherwise
binson_alloc_buf_post(_State, _Args, {ptr, _, _}) -> true;
binson_alloc_buf_post(_State, _Args, _Result) -> false.
% model state updates: buf_size is updated with size, buf_ptr holds pointer to buffer
binson_alloc_buf_next(State, Buf_ptr, [Buf_size]) -> State#state{buf_size = Buf_size, buf_ptr = Buf_ptr}.

% QC model command for testing "binson_writer_init" function
% precondition: buffer is already allocated, binson_writer structure not yet allocated
binson_writer_init_pre(S) -> S#state.buf_size =/= 0 andalso S#state.writer_ptr == undefined.
% arguments: allocated buffer pointer, allocated buffer size
binson_writer_init_args(S) -> [S#state.buf_ptr, S#state.buf_size].
% precondition stage 2: arguments vs state validation - required during shrinking process
binson_writer_init_pre(#state{buf_size = Size}, [_Ptr, BufSize]) -> Size == BufSize.
% command execution:
% allocating binson_writer structure
% calling C binson_light:binson_writer_init, void functions should return ok
% command returns pointer to binson_writer structure
binson_writer_init(Buf_ptr, Buf_size) ->
   {ptr, _, _} = Writer_ptr = eqc_c:alloc({struct, '_binson_writer'}),
   ok = binson_light:binson_writer_init(Writer_ptr, Buf_ptr, Buf_size),
   Writer_ptr.
% post condition: pwriter->error_flags == BINSON_ID_OK
binson_writer_init_post(_S, _A, Writer_ptr) ->
   Writer = eqc_c:deref(Writer_ptr),
   Writer#'_binson_writer'.error_flags == ?BINSON_ID_OK.
% model state updates: writer_ptr should point to valid structure
binson_writer_init_next(S, Writer_ptr, _A) ->
   S#state{writer_ptr = Writer_ptr}.

% QC model command for testing "binson_writer_reset" function
% precondition: valid pointer to binson_writer
binson_writer_reset_pre(S) -> S#state.writer_ptr =/= undefined.
% arguments: pointer to binson_writer
binson_writer_reset_args(S) -> [S#state.writer_ptr].
% command execution: call to binson_writer_reset C function
binson_writer_reset(Writer_ptr) ->
  ok = binson_light:binson_writer_reset(Writer_ptr).
% post condition: pwriter->error_flags == BINSON_ID_OK
binson_writer_reset_post(S, _A, _R) ->
  Writer = eqc_c:deref(S#state.writer_ptr),
  Writer#'_binson_writer'.error_flags == ?BINSON_ID_OK.
% model state updates: data_counter should equal to 0
binson_writer_reset_next(S, _R, _A) -> S#state{data_counter = 0}.

% QC model command for testing "binson_writer_get_counter" function
% precondition: valid pointer to binson_writer
binson_writer_get_counter_pre(S) -> S#state.writer_ptr =/= undefined.
% arguments: pointer to binson_writer
binson_writer_get_counter_args(S) -> [S#state.writer_ptr].
% command execution: simulating call to binson_writer_get_counter C function
% (no access to "static inline" type of functions from eqc_c)
binson_writer_get_counter(Writer_ptr) ->
   %return pw->io.counter
   Writer = eqc_c:deref(Writer_ptr),
   IO = Writer#'_binson_writer'.io,
   IO#'_binson_io'.counter.
% post condition: binson_writer_get_counter() should return expected data_counter state value
binson_writer_get_counter_post(S, _A, Counter) -> eq(S#state.data_counter, Counter).
% model state updates: none
binson_writer_get_counter_next(S, _R, _A) -> S.

% QC model command for testing all "binson_write*" function calls in one place
% This command is triggered when model expects that BINSON_ID_OK will be returned
% i.e. when there is enough space in buffer
% precondition stage 1: valid pointer to binson_writer
binson_write_pre(S) -> S#state.writer_ptr =/= undefined.
% arguments:
% writer pointer, buffer pointer, data_counter,
% randomly selected function from binson_writer_types() list,
% randomly generated arguments for above function type
binson_write_args(S) ->
   Type_Val = ?LET(Type, eqc_gen:oneof(binson_writer_types()), {Type, binson_arg_gen(Type)}),
   [S#state.writer_ptr, S#state.buf_ptr, S#state.data_counter, Type_Val].
% precondition stage 2:
% 1) argument data_counter is valid (required for shrinking process)
% 2) there is enough space for binary binson data
binson_write_pre(S, [_Writer_ptr, _Buf_ptr, Data_counter, {Gen_type, Gen_val}]) ->
   Data_counter == S#state.data_counter andalso
   S#state.buf_size-S#state.data_counter >= byte_size(binson_encoder(Gen_type, Gen_val)).
% command execution: call to selected binson_write* C function,
% arguments: (writer_ptr + argument list from binson_arg_gen)
% function compares also buffer before and after call to write*
% output from function is boolean that is true when buffer part before newly added data was modified, (should be false)
binson_write(Writer_ptr, Buf_ptr, Data_counter, {Gen_type, Gen_val}) ->
   Pre_buf = lists:sublist(eqc_c:deref(Buf_ptr), Data_counter),
   %io:format("Apply: ~p~p~n", [Gen_type, Gen_val]),
   apply(binson_light, Gen_type, [Writer_ptr]++Gen_val),
   Pre_buf =/= lists:sublist(eqc_c:deref(Buf_ptr), Data_counter).
% post condition:
% 1) Data added to buffer should be the same as returned from binson_encoder
% 2) Buffer before added data shouldn't be modified
% 3) pwriter->error_flags == BINSON_ID_OK
binson_write_post(_S, [Writer_ptr, Buf_ptr, Data_counter, {Gen_type, Gen_val}], Modified) ->
   Writer = eqc_c:deref(Writer_ptr),
   Added_data = binary:list_to_bin(lists:sublist(eqc_c:deref(Buf_ptr), Data_counter+1, byte_size(binson_encoder(Gen_type, Gen_val)))),
   eq({Added_data, Modified, Writer#'_binson_writer'.error_flags}, {binson_encoder(Gen_type, Gen_val), false, ?BINSON_ID_OK}).
% model state updates: data_counter should be increased by length of binson encoded binary
binson_write_next(S, _R, [_Writer_ptr, _Buf_ptr, _Data_counter, {Gen_type, Gen_val}]) ->
   S#state{data_counter = S#state.data_counter + byte_size(binson_encoder(Gen_type, Gen_val))}.

% QC model command for testing all "binson_write*" function calls in one place
% This command is triggered when model expects that BINSON_ID_BUF_FULL will be returned
% i.e. when there is not enough space in buffer
% precondition stage 1: valid pointer to binson_writer
binson_write_full_pre(S) -> S#state.writer_ptr =/= undefined.
% arguments:
% writer pointer, data_counter,
% randomly selected function from binson_writer_types() list,
% randomly generated arguments for above function type
binson_write_full_args(S) ->
  Type_Val = ?LET(Type, eqc_gen:oneof(binson_writer_types()), {Type, binson_arg_gen(Type)}),
  [S#state.writer_ptr, S#state.data_counter, Type_Val].
% precondition stage 2:
% 1) argument data_counter is valid (required for shrinking process)
% 2) there is not enough space for binary binson data
binson_write_full_pre(S, [_Writer_ptr, Data_counter, {Gen_type, Gen_val}]) ->
  Data_counter == S#state.data_counter andalso
  S#state.buf_size-S#state.data_counter < byte_size(binson_encoder(Gen_type, Gen_val)).
% command execution: call to selected binson_write* C function,
% arguments: (writer_ptr + argument list from binson_arg_gen)
% output is ignored (void)
binson_write_full(Writer_ptr, _Data_counter, {Gen_type, Gen_val}) ->
  %io:format("Apply: ~p~p~n", [Gen_type, Gen_val]),
  apply(binson_light, Gen_type, [Writer_ptr]++Gen_val).
% post condition:
% 1) pwriter->error_flags == BINSON_ID_BUF_FULL
binson_write_full_post(_S, [Writer_ptr, _Data_counter, {_Gen_type, _Gen_val}], _Res) ->
  Writer = eqc_c:deref(Writer_ptr),
  eq(Writer#'_binson_writer'.error_flags, ?BINSON_ID_BUF_FULL).
% model state updates: data_counter should be increased by length of binson encoded binary
binson_write_full_next(S, _R, [_Writer_ptr, _Data_counter, {Gen_type, Gen_val}]) ->
  S#state{data_counter = S#state.data_counter + byte_size(binson_encoder(Gen_type, Gen_val))}.
