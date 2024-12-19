#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include <string>
#include <vector>
#include "../Profesor/profesor.h"

class Universidad {
private:
    std::string nombre_;
    std::string ubicacion_;
    std::vector<Profesor> profesores_;  // Lista de profesores de la universidad

public:
    Universidad(const std::string &nombre, const std::string &ubicacion) : nombre_(nombre), ubicacion_(ubicacion){}
    void MostrarUniversidad(){
        std::cout << "Universidad: " << nombre_ << "\n"
        << "Ubicacion: " << ubicacion_ << "\n"
        << std::endl;
    }
    std::string GetNombre(){ return nombre_; }
    std::string GetUbicacion(){ return ubicacion_; }
    std::vector<Profesor> GetProfesores(){ return profesores_; }
    void SetNombre(std::string nombre){nombre_=nombre;}
    void SetUbicacion(std::string ubicacion){ubicacion_=ubicacion;}
    void SetProfesores(std::vector<Profesor> profesores){profesores_=profesores;}
};

#endif