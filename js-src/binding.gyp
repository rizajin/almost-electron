{
  "targets": [
    {
      "target_name": "Node-plugin",
      "sources": [ "../src/node_plugin.cpp" ],
      "include_dirs": [
        "<!(node -p \"require('node-addon-api').include\")",
        "../src/library",
        "<!(node -p \"require('node-gyp').find('node').includes[0]\")"
      ],
      "libraries": [
        "<(module_root_dir)/build/Release/Framework.lib"
      ],
      "msvs_settings": {
        "VCCLCompilerTool": {
          "ExceptionHandling": 1
        }
      }
    }
  ]
}