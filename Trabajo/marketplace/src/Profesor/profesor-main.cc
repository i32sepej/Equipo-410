#include "profesor.h"
#include <iostream>

main(){
    Profesor profesor("Juan", "Matematicas", {"Discreta, Calculo, Algebra"});
    std::cout << profesor.GetNombre() << std::endl;
    std::cout << profesor.GetDepartamento() << std::endl;
    for(const auto &asignatura : profesor.GetAsignaturas()){
        std::cout << asignatura << " ";
    }
    std::cout << std::endl;
}