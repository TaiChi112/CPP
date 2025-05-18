# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MyProject VERSION 1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(MyExecutable main.cpp)

# Include directories
include_directories(include)

# Link libraries
target_link_libraries(MyExecutable PRIVATE MyLibrary)

# Set compiler options
target_compile_options(MyExecutable PRIVATE -Wall -Wextra -Werror)

# Add subdirectory for additional CMakeLists.txt
add_subdirectory(src)

# Install rules
install(TARGETS MyExecutable DESTINATION bin)
