#include "programa_SICUE.h"
#include <iostream>

main(){
    Programa_SICUE programa("Cordoba", "Malaga", 4);
    std::cout << programa.GetUniversidadOrigen() << std::endl;
    std::cout << programa.GetUniversidadDestino() << std::endl;
    std::cout << programa.GetDuracion() << std::endl;
}