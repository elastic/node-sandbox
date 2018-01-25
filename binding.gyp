{
  "targets": [ 
    {
      "target_name": "sandbox",
      "sources": [ 
        "native/module.cpp",
      ],
      "conditions": [
        ['OS=="linux"', { "sources": [ "native/sandbox_linux.cpp" ] }],
        ['OS=="win"', { "sources": [ "native/sandbox_win.cpp" ] }],
        ['OS=="mac"', { "sources": [ "native/sandbox_mac.cpp" ] }],
      ]
    }
  ]
}