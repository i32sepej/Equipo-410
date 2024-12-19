#ifndef FUNCION_PLANES_H
#define FUNCION_PLANES_H
#include "../Asignatura/asignatura.h"
#include <string>
#include <vector>

class PlanesDeConvalidacion {
private:
    int duracion_; 
    std::vector<Asignatura> asignaturas_;
    std::string plan_;
    std::string nombre_;

public:
    PlanesDeConvalidacion(const std::string& nombre, const std::string& plan, int duracion) : nombre_(nombre), plan_(plan), duracion_(duracion){}
    std::string getPlan() const { return plan_; }
    int getDuracion() const { return duracion_; }
    std::string GetNombre(){return nombre_;}
    std::vector<Asignatura> getAsignaturas() const { return asignaturas_;}
    void setNombre(std::string nombre){nombre_=nombre;}
    void setPlan(const std::string& plan) { plan_ = plan; }
    void setDuracion(int duracion) { duracion_ = duracion; }
    void setAsignaturas(const std::vector<Asignatura>& asignaturas) { asignaturas_ = asignaturas; }
    
    void agregarPlanConvalidacion(const std::string& archivo, PlanesDeConvalidacion plan);
    void mostrarPlanesDeConvalidacion(const std::string& archivo);
};

#endif 