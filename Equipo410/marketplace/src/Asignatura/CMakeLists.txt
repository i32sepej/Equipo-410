add_library(Asignatura asignatura.cc )
target_include_directories(Asignatura PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(asignatura-main asignatura-main.cc)
target_link_libraries(asignatura-main Asignatura)