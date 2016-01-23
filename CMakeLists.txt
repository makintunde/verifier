cmake_minimum_required(VERSION 3.3)
project(verifier)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/model/kripke_model.cpp
        src/model/kripke_model.h
        src/model/model.cpp
        src/model/model.h src/model/specific_model.h src/model/parser.cc src/model/parser.h src/model/main.cc)

add_executable(main ${SOURCE_FILES})