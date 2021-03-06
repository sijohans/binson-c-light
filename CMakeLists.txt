cmake_minimum_required(VERSION 2.8)
project(binson-c-light)
enable_language(C)
enable_language(CXX)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
find_package(Sanitizers)

option(BUILD_TESTS "Build tests" ON)

set(CMAKE_C_FLAGS " -std=c99 -g -ggdb -Werror -Wall -Wextra -Wpedantic -Wshadow -Wcast-qual -std=c99 ")
set(CMAKE_CXX_FLAGS " -std=c++11 -g -ggdb -Werror -Wall -Wextra -Wpedantic -Wshadow ")

if(BUILD_TESTS)
    enable_testing()
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fprofile-arcs -ftest-coverage -O0 ")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage -O0 ")
else(BUILD_TESTS)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3 ")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 ")
endif(BUILD_TESTS)


include_directories(.)

add_library(binson_parser binson_parser.c)
add_library(binson_writer binson_writer.c)
add_library(binson_class binson.cpp)

if(BUILD_TESTS)
  add_sanitizers(binson_class)
  add_sanitizers(binson_writer)
  add_sanitizers(binson_parser)

  add_subdirectory(fuzz-test)
  add_subdirectory(utest)


  add_executable(r_fuzz_defined fuzz-test/fuzz_defined.c)
  target_link_libraries(r_fuzz_defined binson_parser)
  add_sanitizers(r_fuzz_defined)


  add_executable(r_fuzz_parser_verify fuzz-test/fuzz_parser_verify.c)
  target_link_libraries(r_fuzz_parser_verify binson_parser)
  add_sanitizers(r_fuzz_parser_verify)

  add_executable(r_fuzz_goinoutobj fuzz-test/fuzz_goinoutobj.c)
  target_link_libraries(r_fuzz_goinoutobj binson_parser)
  add_sanitizers(r_fuzz_goinoutobj)

  add_executable(r_fuzz_goinoutarr fuzz-test/fuzz_goinoutarr.c)
  target_link_libraries(r_fuzz_goinoutarr binson_parser)
  add_sanitizers(r_fuzz_goinoutarr)


  get_filename_component(_fullpath "fuzz-test/generated_test_cases" REALPATH)
  if (EXISTS "${_fullpath}")
    file(GLOB files "fuzz-test/generated_test_cases/*/*.c")
    foreach(file ${files})
      get_filename_component(barename ${file} NAME)
      add_executable(${barename} ${file})
      add_sanitizers(${barename})
      target_link_libraries(${barename} binson_writer binson_parser)
      add_test(${barename} ${barename})
    endforeach()
  ENDIF()

endif(BUILD_TESTS)
