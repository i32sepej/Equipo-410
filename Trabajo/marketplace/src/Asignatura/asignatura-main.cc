#include <iostream>
#include <vector>
#include "asignatura.h"

main(){
    Asignatura asignatura("Matemetica Discreta", 0001, 6);
    std::cout << asignatura.GetNombre() << std::endl;
    std::cout << asignatura.GetCodigoId() << std::endl;
    std::cout << asignatura.GetCreditos() << std::endl;
}