cmake_minimum_required(VERSION 3.29.2)

project(
    bakalarka
    VERSION 0.0.0
    LANGUAGES CXX
)

set(BUILD_SHARED_LIBS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(GLEW 2.0 REQUIRED)
find_package(glfw3 3.4 REQUIRED)

add_subdirectory(3rdparty/glm)

add_subdirectory(src/)
