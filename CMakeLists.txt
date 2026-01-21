cmake_minimum_required(VERSION 3.20)

project(polytech-dijon-cpp-3a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Warnings (qualité) selon compilateur
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
endif()

add_executable(polytech-dijon-cpp-3a
  src/main.cpp
  src/gestion.cpp
)

# Si tu utilises include/
target_include_directories(polytech-dijon-cpp-3a PRIVATE include)

# cmake -S . -B build -G Ninja
# cmake --build build 
# build\polytech-dijon-cpp-3a.exe