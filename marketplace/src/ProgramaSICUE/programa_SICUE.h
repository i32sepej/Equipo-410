#ifndef PROGRAMASICUE_H
#define PROGRAMASICUE_H
#include <string>
#include <iostream>


class Programa_SICUE{
    private:
        std::string universidadOrigen_;
        std::string universidadDestino_;
        int duracion_;
    public:
        Programa_SICUE(const std::string &universidadOrigen, const std::string &universidadDestino, const int duracion) : universidadOrigen_(universidadOrigen), universidadDestino_(universidadDestino), duracion_(duracion) {}
        void GetPrograma();
        std::string GetUniversidadOrigen(){return universidadOrigen_;}
        std::string GetUniversidadDestino(){return universidadDestino_;}
        int GetDuracion(){return duracion_;}
        void SetUniversidadOrigen(std::string universidadOrigen){universidadOrigen_=universidadOrigen;}
        void SetUniversidadOrigen(std::string universidadDestino){universidadDestino_=universidadDestino;}
        void SetDuracion(int duracion){duracion_=duracion;}
};


#endif