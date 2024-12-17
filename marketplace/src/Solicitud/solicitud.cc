#include "solicitud.h"
#include <iostream>


void Solicitud:: GetSolicitud(){
    std::cout << "Solicitud ID: " << id_ << "\nFecha: " << fecha_ << "\nEstado: " << estado_ <<std::endl;
    std::cout << "Nombre estudiante: " << estudiante_.GetNombre() << "\n" << "Titulacion: " << estudiante_.GetTitulacion() << "\n" << "Intercambio: " << estudiante_.GetIntercambio() << "\n" << std::endl;
    std::cout << "Programa SICUE: " << programa_.GetPrograma() << "\n";
}