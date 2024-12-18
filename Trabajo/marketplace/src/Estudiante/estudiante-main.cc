#include "estudiante.h"
#include <iostream>

main(){
    Estudiante estudiante("Carlos Perez", "Ingenieria informatica", "Intercambio 2024");
    std::cout << "Nombre estudiante: " << estudiante.GetNombre() << "\n" << "Titulacion: " 
    << estudiante.GetTitulacion() << "\n" 
    << "Intercambio: " << estudiante.GetIntercambio() << "\n" 
    << std::endl;
}