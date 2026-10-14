cmake_minimum_required(VERSION 4.3)

project(GameEngine LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(vendor)

add_executable(GameEngine
    src/main.cpp
    include/VertexData.h
    include/ShaderSource.h
)

target_include_directories(GameEngine PRIVATE include)

# 禁止 GLFW 自动包含 OpenGL 头文件
target_compile_definitions(GameEngine
    PRIVATE
    GLFW_INCLUDE_NONE
)

# 链接第三方库
target_link_libraries(GameEngine
    PRIVATE
    glfw
    glad
    glm::glm-header-only
)