#ifndef ASIGNATURA_H
#define ASIGNATURA_H
#include <string>
#include <iostream>

class Asignatura{
    private:
        std::string nombre_;
        std::string codigoId_;
        int duracion_;
    public:
        Asignatura(const std::string nombre,const std::string codigoId, const int duracion) : nombre_(nombre), codigoId_(codigoId), duracion_(duracion){}
        void mostrarAsignatura(){
            std::cout << "Asignatura: " << nombre_ << "\n"
            << "Codigo: " << codigoId_ << "\n"
            << "Duracion: " << duracion_ << "\n"
            << std::endl;
        }
        std::string GetNombre() const {return nombre_;}
        std::string GetCodigoId() const {return codigoId_;}
        int GetDuracion(){return duracion_;}
        void SetNombre(std::string nombre){nombre_=nombre;}
        void SetCodigoId(int codigoId){codigoId_=codigoId;}
        void SetDuracion(int duracion){duracion_=duracion;}
};


#endif