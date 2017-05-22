cmake_minimum_required(VERSION 3.7)
project(3DBinPacking)

include_directories(include)

set(CMAKE_CXX_STANDARD 11)

set(EXE_NAME "3DBpp")

set(SFML_DYNAMIC_LIBRARIES TRUE)
set(SFML_ROOT "/usr/local")
set(CMAKE_MODULE_PATH "usr/local/share/SFML/cmake/Modules"
        "/usr/share/SFML/cmake/Modules")

set(EXECUTABLE_OUTPUT_PATH ../)

set(SOURCE_FILES
        src/visudat_parser.cpp
        src/main.cpp
        src/Box.cpp
        src/Things.cpp
        src/Text.cpp
        src/AShape.cpp
        src/Gui.cpp
        src/Representation.cpp
        src/SceneManager.cpp
        src/SfmlQuad.cpp)

add_executable(${EXE_NAME} ${SOURCE_FILES})

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(SFML 2 REQUIRED system window graphics network audio)

if (SFML_FOUND)
    include_directories(${SFML_INCLUDED_DIR})
    target_link_libraries(${EXE_NAME} ${SFML_DEPENDENCIES})
    target_link_libraries(${EXE_NAME} ${SFML_LIBRARIES})
    target_link_libraries(${EXE_NAME} ${OPENGL_LIBRARIES})
    target_link_libraries(${EXE_NAME} ${GLUT_LIBRARIES})
endif()