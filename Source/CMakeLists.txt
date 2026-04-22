#-------------------------------------------------------------------------------
# Copyright (c) 2019 John D. Haughton
# SPDX-License-Identifier: MIT
#-------------------------------------------------------------------------------

add_executable(additive additive.cpp)

target_link_libraries(additive SIG_FL64 GUI)

set_target_properties(additive PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
