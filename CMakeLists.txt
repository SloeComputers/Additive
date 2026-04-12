#-------------------------------------------------------------------------------
# Copyright (c) 2019 John D. Haughton
# SPDX-License-Identifier: MIT
#-------------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.20)

project(Additive
        LANGUAGES CXX
        VERSION 0.2)

add_subdirectory(Platform)

add_executable(additive Source/additive.cpp)

target_link_libraries(additive SIG_FL64 GUI)
