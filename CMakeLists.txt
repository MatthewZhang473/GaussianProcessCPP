cmake_minimum_required(VERSION 3.10)
project(GaussianProcessCPP)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the main executable
add_executable(my_program src/main.cpp)

# Include Eigen headers
# Use the full absolute path to the Eigen directory
target_include_directories(my_program PRIVATE /Users/matthew/Documents/GaussianProcessCPP/Eigen)
