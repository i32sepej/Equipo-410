#ifndef ASIGNATURA_H
#define ASIGNATURA_H
#include <string>
#include <iostream>

class Asignatura{
    private:
        std::string nombre_;
        int codigoId_;
        int creditos_;
    public:
        Asignatura(const std::string nombre,const int codigoId, const int creditos) : nombre_(nombre), codigoId_(codigoId), creditos_(creditos){}
        std::string GetNombre(){return nombre_;}
        int GetCodigoId(){return codigoId_;}
        int GetCreditos(){return creditos_;}
        void SetNombre(std::string nombre){nombre_=nombre;}
        void SetCodigoId(int codigoId){codigoId_=codigoId;}
        void SetCreditos(int creditos){creditos_=creditos;}
};


#endif