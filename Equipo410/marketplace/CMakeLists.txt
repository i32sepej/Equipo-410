cmake_minimum_required(VERSION 3.10)
project(Trabajo)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Estudiante)
add_subdirectory(Solicitudes)
add_subdirectory(ProgramaSICUE)
add_subdirectory(PlanConvalidacion)
add_subdirectory(Profesor)
add_subdirectory(Asignatura)
add_subdirectory(Universidad)
add_subdirectory(ListaSolicitudes)

add_executable(main main.cc)

target_link_libraries(main
    Asignatura
    Estudiante
    ListaSolicitudes
    PlanConvalidacion
    Profesor
    ProgramaSICUE
    Solicitud
    Universidad)


