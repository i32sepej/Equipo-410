#ifndef FUNCION_PLANES_H
#define FUNCION_PLANES_H

#include <string>
#include <vector>

class PlanesDeConvalidacion {
private:
    std::string id_;
    int numeroPlazas_;
    std::string universidadOrigen_;
    std::string universidadDestino_;
    std::string facultadOrigen_;
    std::string facultadDestino_;
    std::string carrera_;
    int duracion_; 
    std::string curso_;
    std::vector<std::pair<std::string, std::string>> asignaturas_;

public:

    std::string getId() const { return id_; }
    int getNumeroPlazas() const { return numeroPlazas_; }
    std::string getUniversidadOrigen() const { return universidadOrigen_; }
    std::string getUniversidadDestino() const { return universidadDestino_; }
    std::string getFacultadOrigen() const { return facultadOrigen_; }
    std::string getFacultadDestino() const { return facultadDestino_; }
    std::string getCarrera() const { return carrera_; }
    int getDuracion() const { return duracion_; }
    std::string getCurso() const { return curso_; }
    std::vector<std::pair<std::string, std::string>> getAsignaturas() const { return asignaturas_; }
     void setId(const std::string& id) { id_ = id; }
    void setNumeroPlazas(int numeroPlazas) { numeroPlazas_ = numeroPlazas; }
    void setUniversidadOrigen(const std::string& universidadOrigen) { universidadOrigen_ = universidadOrigen; }
    void setUniversidadDestino(const std::string& universidadDestino) { universidadDestino_ = universidadDestino; }
    void setFacultadOrigen(const std::string& facultadOrigen) { facultadOrigen_ = facultadOrigen; }
    void setFacultadDestino(const std::string& facultadDestino) { facultadDestino_ = facultadDestino; }
    void setCarrera(const std::string& carrera) { carrera_ = carrera; }
    void setDuracion(int duracion) { duracion_ = duracion; }
    void setCurso(const std::string& curso) { curso_ = curso; }
    void setAsignaturas(const std::vector<std::pair<std::string, std::string>>& asignaturas) { asignaturas_ = asignaturas; }

    void agregarPlanConvalidacion(const std::string& archivo, PlanesDeConvalidacion plan);
    void imprimirPlanesDeConvalidacion(const std::string& archivo);
};

#endif 