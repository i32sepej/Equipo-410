#include <iostream>
#include <fstream>
#include "plan_convalidacion.h"

void PlanesDeConvalidacion::agregarPlanConvalidacion(const std::string& archivo, PlanesDeConvalidacion plan) {
    std::ofstream archivoSalida(archivo, std::ios::app);
    if (archivoSalida.is_open()) {
        archivoSalida << plan.GetNombre() << " " << plan.getPlan() << "\n";
        archivoSalida << plan.getDuracion();
        for (const auto& asignatura : plan.getAsignaturas()) {
            archivoSalida << asignatura.GetNombre() << "-" << asignatura.GetCodigoId() << ". ";
        }
        archivoSalida << "\n\n";

        archivoSalida.close();
        std::cout << "Plan de convalidación guardado correctamente." << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo." << std::endl;
    }
}

void PlanesDeConvalidacion::mostrarPlanesDeConvalidacion(const std::string& archivo) {
    std::ifstream archivoEntrada(archivo);
    if (archivoEntrada.is_open()) {
        std::string linea;
        while (std::getline(archivoEntrada, linea)) {
            std::cout << linea << std::endl;
        }
        archivoEntrada.close();
        std::cout << "\nPlanes de convalidación mostrados correctamente." << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo para lectura." << std::endl;
    }
}