cmake_minimum_required(VERSION 3.20)
project(OpenGLIntro)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)

add_executable(OpenGLIntro
        main.cpp
)

target_link_libraries(OpenGLIntro
        OpenGL::GL
        glfw
        GLEW::GLEW
)