cmake_minimum_required(VERSION 3.3)
project(verifier)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/model/kripke_model.cc
        src/model/kripke_model.h
        src/model/model.cc
        src/model/model.h src/model/specific_model.h src/parser/parser.cc src/parser/parser.h src/model/main.cc src/token/kripke/kripke_token.h src/token/kripke/box_token.cc src/token/kripke/box_token.h src/token/kripke/atom_token.cc src/token/kripke/atom_token.h src/token/kripke/true_token.cc src/token/kripke/true_token.h src/model/path.cc src/model/path.h src/token/kripke/not_token.cc src/token/kripke/not_token.h src/token/kripke/and_token.cc src/token/kripke/and_token.h src/token/kripke/diamond_token.cc src/token/kripke/diamond_token.h test/model/kripke_model_test.cc test/model/kripke_model_test.h src/token/ltl/ltl_token.h)

add_executable(main ${SOURCE_FILES})