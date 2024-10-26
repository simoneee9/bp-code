cmake_minimum_required(VERSION 3.29.2)

project(
    bakalarka
    VERSION 0.0.0
)

set(BUILD_SHARED_LIBS ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(GLEW 2.0 REQUIRED)


set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(3rdparty/glfw)

add_subdirectory(3rdparty/glm)

add_subdirectory(src/)
