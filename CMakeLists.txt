cmake_minimum_required(VERSION 3.16)
project(nonsense LANGUAGES CXX)

add_executable(nonsense src/main.cpp src/nonsense.cpp)
target_include_directories(nonsense PRIVATE include)
target_compile_features(nonsense PRIVATE cxx_std_17)
