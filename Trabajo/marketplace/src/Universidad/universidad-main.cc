#include "universidad.h"
#include "../Profesor/profesor.h"
#include <iostream>

int main() {
    Profesor profesor1("Juan Pérez", "Ciencias de la Computación", {"Matemáticas Discretas", "Algoritmos"});
    Profesor profesor2("Ana López", "Ingeniería", {"Estructuras de Datos", "Programación Avanzada"});

    Universidad universidad("Universidad de Cordoba", "Cordoba" , {profesor1, profesor2});

    std::cout << universidad.GetNombre() << std::endl;
    std::cout << universidad.GetUbicacion() << std::endl;
}