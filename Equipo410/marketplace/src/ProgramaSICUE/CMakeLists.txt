add_library(ProgramaSICUE programa_SICUE.cc)
target_include_directories(ProgramaSICUE PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(programa_SICUE-main programa_SICUE-main.cc)
target_link_libraries(programa_SICUE-main ProgramaSICUE)
