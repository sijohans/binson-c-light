#include <assert.h>
#include <string.h>
#include "binson_writer.h"

/*
{
  "A": "?", 
  "B": 1, 
  "C": 3.0, 
  "D": false, 
  "E": "0x0102", 
  "F": {
  }, 
  "G": [
    "0x0102",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "E",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "E",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "E",
    false,
    false,
    {
      "E": "E"
    },
    "?",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
    },
    "G",
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "B",
    "e",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "B",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "E",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    false,
    {
      "E": "E"
    },
    "E",
    false,
    false,
    false,
    {
    },
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
    },
    "G",
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "B",
    "e",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "B",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "E",
    false,
    false,
    {
      "E": "E"
    },
    "B",
    1,
    "C",
    2.1743403008E10,
    1,
    "C",
    9.699344576E9,
    {
    },
    "G",
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "B",
    "e",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    "EEBCEEEEEEEE",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    false,
    {
      "E": "E"
    },
    "E",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
    },
    "G",
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "B",
    "e",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "E",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    false,
    {
      "E": "E"
    },
    "E",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
    },
    "G",
    [
      
    ],
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "",
    "CF      \b@DE",
    false,
    "0x0102",
    "F",
    {
    },
    "G",
    [
      "0x0102",
      false,
      false,
      false,
      {
        "E": "E"
      },
      "E",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      "E",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      "B",
      "e",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        ".": "E"
      },
      "B",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      "E",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
      },
      "G",
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      "B",
      "e",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      " ",
      false,
      {
        "E": "E"
      },
      "B",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      "E",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      false,
      {
        "E": "E"
      },
      "E",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
      },
      "G",
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      "",
      "CF      \b@DE",
      false,
      "0x0102",
      "F",
      {
      },
      "G",
      [
        "0x0102",
        false,
        false,
        false,
        {
          "E": "E"
        },
        "E",
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        [
          
        ],
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        "E",
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        [
          
        ],
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        "B",
        "e",
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        "B",
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        "E",
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        [
          
        ],
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        false,
        {
          "E": "E"
        },
        "E",
        false,
        {
          "E": "E"
        },
        "EEE@EEAEEEEEEEE",
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        [
          
        ],
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
        },
        "G",
        [
          
        ],
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        "B",
        "e",
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        "B",
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        "E",
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        [
          
        ],
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        false,
        {
          "E": "E"
        },
        "E",
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        [
          
        ],
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        4990905684784857408,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        {
          "E": "E"
        },
        "",
        "",
        "",
        "",
        "",
        " ",
        "",
        "@AGB"
      ],
      "",
      "",
      "",
      "",
      "",
      "",
      "EEEEEEEEEE",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      "B",
      "B",
      1,
      "C",
      6.121307601501538E24,
      false,
      false,
      false,
      false,
      false,
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      false,
      {
        "E": "E"
      },
      "E",
      false,
      {
        "E": "E"
      },
      "EEE@EEAEEEEEEEE",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
      },
      "G",
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      "B",
      "e",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      "B",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      "E",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      false,
      {
        "E": "E"
      },
      "E",
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
      },
      "G",
      [
        
      ],
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      {
        "E": "E"
      },
      "",
      "",
      "",
      "",
      "",
      " ",
      "",
      "@AGB"
    ],
    "",
    "",
    "",
    "",
    "",
    "E",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "B",
    "B",
    1,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    {
      "E": "E"
    },
    "B",
    "B",
    1,
    "C",
    2.1747253248E10,
    1,
    "C",
    9.665790144E9
  ], 
  "?": [
    
  ]
}
*/
int main(void)
{
    uint8_t expected[3115] = "\x40\x14\x01\x41\x14\x03\xef\xbf\xbd\x14\x01\x42\x10\x01\x14\x01\x43\x46\x00\x00\x00\x00\x00\x00\x08\x40\x14\x01\x44\x45\x14\x01\x45\x18\x02\x01\x02\x14\x01\x46\x40\x41\x14\x01\x47\x42\x18\x02\x01\x02\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x03\xef\xbf\xbd\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x14\x01\x65\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x40\x41\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x14\x01\x65\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x10\x01\x14\x01\x43\x46\x00\x00\x00\x00\x08\x40\x14\x42\x10\x01\x14\x01\x43\x46\x00\x00\x00\x06\x02\x11\x02\x42\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x14\x01\x65\x45\x45\x45\x45\x45\x45\x45\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x14\x01\x65\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x14\x14\x14\x14\x14\x14\x01\x43\x46\x00\x00\x00\x00\x00\x00\x08\x40\x14\x01\x44\x45\x14\x01\x45\x18\x02\x01\x02\x14\x01\x46\x40\x41\x14\x01\x47\x42\x18\x02\x01\x02\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x14\x01\x42\x14\x01\x65\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x2e\x14\x01\x45\x41\x14\x01\x42\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x14\x01\x65\x45\x45\x45\x45\x45\x45\x45\x14\x01\x00\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x14\x14\x14\x14\x14\x14\x01\x43\x46\x00\x00\x00\x00\x00\x00\x08\x40\x14\x01\x44\x45\x14\x01\x45\x18\x02\x01\x02\x14\x01\x46\x40\x41\x14\x01\x47\x42\x18\x02\x01\x02\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x14\x01\x42\x14\x01\x65\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x15\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x14\x01\x65\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x13\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x00\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x40\x41\x14\x01\x47\x42\x43\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x14\x01\x42\x10\x01\x14\x01\x43\x46\x00\x00\x00\x00\xf3\x40\x14\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x15\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x14\x01\x65\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x41\x14\x01\x47\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x00\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x40\x41\x14\x01\x47\x42\x43\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x14\x01\x42\x10\x01\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x42\x14\x01\x42\x10\x01\x14\x01\x43\x46\x00\x00\x00\x00\xf3\x40\x14\x42\x10\x01\x14\x01\x43\x46\x00\x00\x00\x06\x02\x01\x02\x42\x43\x14\x03\xef\xbf\xbd\x42\x43\x41";
    uint8_t created[3115];
    binson_writer w;
    binson_writer_init(&w, created, sizeof(created));
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x41", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\xef\xbf\xbd", 3);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x43", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_double(&w, 3.0);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x44", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x01\x02", 2);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x46", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x01\x02", 2);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\xef\xbf\xbd", 3);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x65", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x65", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x43", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_double(&w, 2.1743403008E10);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x43", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_double(&w, 9.699344576E9);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x65", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x45\x45\x42\x43\x45\x45\x45\x45\x45\x45\x45\x45", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x65", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x01\x43\x46\x00\x00\x00\x00\x00\x00\x08\x40\x14\x01\x44\x45\x14\x01", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x01\x02", 2);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x46", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x01\x02", 2);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x65", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x2e", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x65", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x00", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x01\x43\x46\x00\x00\x00\x00\x00\x00\x08\x40\x14\x01\x44\x45\x14\x01", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x01\x02", 2);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x46", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_bytes(&w, (uint8_t *)"\x01\x02", 2);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x65", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45", 21);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x65", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 4990905684784857408);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x00\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x40\x41\x14\x01\x47\x42", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x45\x45\x45\x45\x45\x45\x45\x45\x45\x45", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x43", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_double(&w, 6.121307601501538E24);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45\x45\x45\x40\x14\x01\x45\x14\x01\x45\x41\x14\x01\x45\x45\x45\x45\x45\x45\x45\x45", 21);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x65", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x47", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x00\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x40\x41\x14\x01\x47\x42", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x14\x45", 20);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_boolean(&w, false);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x45", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x42", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x43", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_double(&w, 2.1747253248E10);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_integer(&w, 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_string_with_len(&w, "\x43", 1);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_double(&w, 9.665790144E9);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_name_with_len(&w, "\xef\xbf\xbd", 3);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_begin(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_array_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    binson_write_object_end(&w);
    assert(w.error_flags == BINSON_ID_OK);
    assert(memcmp(expected, created, sizeof(expected)) == 0);
    return 0;
}

