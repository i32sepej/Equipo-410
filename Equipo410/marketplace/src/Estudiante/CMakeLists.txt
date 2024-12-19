add_library(Estudiante estudiante.cc)
target_include_directories(Estudiante PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(estudiante-main estudiante-main.cc)
target_link_libraries(estudiante-main Estudiante)
