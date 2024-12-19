#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>

class Estudiante{
    private:
        std::string nombre_;
        std::string titulacion_;
        std::string intercambio_;

    public:
    Estudiante::Estudiante(const std::string &nombre, const std::string &titulacion, const std::string &intercambio) : nombre_(nombre), titulacion_(titulacion), intercambio_(intercambio){}
    std::string GetNombre(){return nombre_;}
    std::string GetTitulacion(){return titulacion_;}
    std::string GetIntercambio(){return intercambio_;}
    void SetNombre(std::string nombre){nombre_=nombre;}
    void SetTitulacion(std::string titulacion){titulacion_=titulacion;}
    void SetIntercambio(std::string intercambio){intercambio_=intercambio;}
};


#endif