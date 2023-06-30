cmake_minimum_required(VERSION 3.0)
cmake_policy(SET CMP0072 NEW)

project(EtibGL)

set(CMAKE_CXX_STANDARD 20)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

add_executable(EtibGL
    main.cpp
    src/Window.cpp
    )

target_link_libraries(EtibGL
    PRIVATE
	OpenGL::GL
	GLEW::GLEW
	glfw
	)
# add include dir
target_include_directories(EtibGL PUBLIC
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/EtibGL
    )
