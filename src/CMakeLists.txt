cmake_minimum_required(VERSION 3.21)
project(Node-plugin)

# lazy setting, not sure if they have some search ready made, this works
# so I couldn't care less. ;)
set(NODE_ADDON_API_DIR "${CMAKE_SOURCE_DIR}/node_modules/node-addon-api")
message(STATUS "Node-Addon-API include directory: ${NODE_ADDON_API_DIR}")

include_directories(${NODE_ADDON_API_DIR})
include_directories(${CMAKE_JS_INC})

add_library(Node-plugin SHARED node_plugin.cpp)
set_target_properties(Node-plugin PROPERTIES PREFIX "" SUFFIX ".node")
target_link_libraries(Node-plugin PRIVATE Framework ${CMAKE_JS_LIB})
