add_library(Universidad universidad.cc)
target_include_directories(Universidad PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(universidad-main universidad-main.cc)
target_link_libraries(universidad-main Universidad)