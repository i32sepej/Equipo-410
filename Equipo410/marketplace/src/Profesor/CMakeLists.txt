add_library(Profesor profesor.cc)
target_include_directories(Profesor PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(profesor-main profesor-main.cc)
target_link_libraries(profesor-main Profesor)