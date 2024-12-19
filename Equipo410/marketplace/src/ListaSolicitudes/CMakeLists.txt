add_library(ListaSolicitudes listasolicitudes.cc)
target_include_directories(ListaSolicitudes PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(listasolicitudes-main listasolicitudes-main.cc)
target_link_libraries(listasolicitudes-main ListaSolicitudes)