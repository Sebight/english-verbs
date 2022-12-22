cmake_minimum_required(VERSION 3.23)
project(English_Verbs)

set(CMAKE_CXX_STANDARD 14)

add_executable(English_Verbs src/main.cpp src/verbs/Verb.cpp src/verbs/Verb.h src/evaluator/Evaluator.cpp src/evaluator/Evaluator.h src/verbs/VerbForm.h src/utils/Utility.cpp src/utils/Utility.h)
