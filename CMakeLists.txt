cmake_minimum_required(VERSION 3.26)
project(Hangman)

set(CMAKE_CXX_STANDARD 20)

add_executable(Hangman src/main.cpp
        src/Session.cpp
        src/WordList.cpp
        src/Input.cpp
        src/Game.cpp)

target_include_directories(Hangman PRIVATE include)
target_compile_options(Hangman PRIVATE -Wall -Wextra -Werror)
