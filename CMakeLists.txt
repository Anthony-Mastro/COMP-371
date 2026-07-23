cmake_minimum_required(VERSION 3.20)
project(Assignment2)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)
include_directories(/opt/homebrew/opt/glm/include)

add_executable(Assignment2
        main.cpp
)

target_link_libraries(Assignment2
        OpenGL::GL
        glfw
        GLEW::GLEW
)