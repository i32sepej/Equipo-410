#ifndef PROFESOR_H
#define PROFESOR_H
#include <string>
#include <vector>


class Profesor{
    private:
        std::string nombre_;
        std::string departamento_;
        std::vector<std::string> asignaturas_;
    public:
        Profesor(const std::string &nombre, const std::string &departamento, const std::vector<std::string> &asignaturas) : nombre_(nombre), departamento_(departamento), asignaturas_(asignaturas){}
        std::string GetNombre(){return nombre_;}
        std::string GetDepartamento(){return departamento_;}
        std::vector<std::string> GetAsignaturas(){return asignaturas_;}
        void SetNombre(std::string nombre){nombre_=nombre;}
        void SetDepartamento(std::string departamento){departamento_=departamento;}
        void SetAsignatura(std::vector<std::string> &asignaturas){asignaturas_=asignaturas;}
        
};


#endif