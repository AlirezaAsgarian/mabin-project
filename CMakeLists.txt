cmake_minimum_required(VERSION 3.0)
project(state C)
set(CMAKE_C_STANDARD 99)

file(GLOB_RECURSE SOURCE "src/main.c" "src/*.h")
add_executable(state "${SOURCE}")

include_directories("/usr/include/SDL2" "/home/alireza/state.io/sdl2")
target_link_libraries(state m SDL2 SDL2_gfx SDL2_image SDL2_ttf)
