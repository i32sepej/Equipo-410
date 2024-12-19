add_library(PlanConvalidacion plan_convalidacion.cc)
target_include_directories(PlanConvalidacion PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(plan_convalidacion-main plan_convalidacion-main.cc)
target_link_libraries(plan_convalidacion-main PlanConvalidacion)