cmake_minimum_required(VERSION 3.10)
project(ChessGame)

set(CMAKE_CXX_STANDARD 17)

# Source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(ChessGame ${SOURCES})

# Link SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
target_link_libraries(ChessGame sfml-graphics sfml-window sfml-system)
