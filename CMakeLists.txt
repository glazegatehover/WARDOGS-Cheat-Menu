cmake_minimum_required(VERSION 3.16)
project(nonsense LANGUAGES CXX)

add_executable(nonsense
    src/main.cpp
    src/nonsense.cpp
    src/core/sentence.cpp
    src/modules/words.cpp
    src/utils/random_index.cpp
)
target_include_directories(nonsense PRIVATE include)
target_compile_features(nonsense PRIVATE cxx_std_17)
