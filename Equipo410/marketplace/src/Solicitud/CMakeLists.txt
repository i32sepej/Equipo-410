add_library(Solicitud solicitud.cc)
target_include_directories(Solicitud PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(solicitud-main solicitud-main.cc)
target_link_libraries(solicitud-main Solicitud)
