cmake_minimum_required(VERSION 3.0.0)

project(MTPL VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(IntermediateCodeGenerator)
add_subdirectory(LexicalAnalyzer)
add_subdirectory(Lib)
add_subdirectory(ParserAnalyzer)
add_subdirectory(SemanticAnalyzer)
add_subdirectory(SymbolTable)
add_subdirectory(VirtualMachine)

add_executable(MTPL main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
