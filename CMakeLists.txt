cmake_minimum_required(VERSION 3.10)
project(SimpleDatabase LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    main.cpp
    person.cpp
    student.cpp
    professor.cpp
)

add_executable(SimpleDatabase ${SOURCES})

target_include_directories(SimpleDatabase PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(MSVC)
  target_compile_options(SimpleDatabase PRIVATE /W4 /permissive-)
else()
  target_compile_options(SimpleDatabase PRIVATE -Wall -Wextra -Wpedantic)
endif()
