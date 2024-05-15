cmake_minimum_required(VERSION 3.21)
project(Framework)

add_library(Framework SHARED almost_electron.cpp)
set_target_properties(Framework PROPERTIES OUTPUT_NAME "Framework")