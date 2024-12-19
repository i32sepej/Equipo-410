#ifndef LISTASOLICITUDES_H
#define LISTASOLICITUDES_H
#include <iostream>
#include <vector>
#include "../Solicitud/solicitud.h"

class ListaSolicitudes{
    private:
        std::vector<Solicitud> solicitudes_;
    public:
        void agregarSolicitud(const Solicitud& solicitud){
            solicitudes_.push_back(solicitud);
        }
        void mostrarSolicitudes(){
            if(solicitudes_.empty()){
                std::cout << "No hay solicitudes" << std::endl;
            }
            for(size_t i=0;i<solicitudes_.size();i++){
                std::cout << i+1 << ".";
                solicitudes_[i].mostrarSolicitud(solicitudes_[i]);
            }
        }
        bool eliminarSolicitud(const std::string& nombre){
            for(auto it=solicitudes_.begin(); it != solicitudes_.end(); it++){
                if(it->GetEstudiante()==nombre){
                    solicitudes_.erase(it);
                    return true;
                }    
            }
            return false;
        }
        Solicitud* obtenerSolicitudPorNombre(const std::string& nombre){
            for(auto& solicitud : solicitudes_){
                if(solicitud.GetEstudiante()==nombre){
                    return &solicitud;
                }
            }
        }
};


#endif