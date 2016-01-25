cmake_minimum_required(VERSION 3.3)
project(verifier)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/model/kripke_model.cpp
        src/model/kripke_model.h
        src/model/model.cpp
        src/model/model.h src/model/specific_model.h src/parser/parser.cc src/parser/parser.h src/model/main.cc src/token/token.cc src/token/token.h src/token/box_token.cc src/token/box_token.h src/token/atom_token.cc src/token/atom_token.h src/token/true_token.cc src/token/true_token.h src/model/path.cc src/model/path.h)

add_executable(main ${SOURCE_FILES})