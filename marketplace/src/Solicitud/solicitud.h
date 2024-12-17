#ifndef SOLICITUD_H
#define SOLICITUD_H

#include <string>
#include "../Estudiante/estudiante.h"
#include "../ProgramaSICUE/programa_SICUE.h"

class Solicitud{
    private:
        int id_;
        std::string fecha_;
        std::string estado_;
        Estudiante estudiante_;
        Programa_SICUE programa_;
    public:
        Solicitud(const int id, const std::string &fecha, const std::string &estado, const Estudiante &estudiante, const Programa_SICUE &programa) : id_(id), fecha_(fecha), estado_(estado), estudiante_(estudiante), programa_(programa){}
        void GetSolicitud(); 
        int GetId(){return id_;}
        std::string GetFecha(){return fecha_;}
        std::string GetEstado(){return estado_;}
        Estudiante GetEstudiante(){return estudiante_;}
        Programa_SICUE GetPrograma(){return programa_;}
        void SetId(int id){id_=id;}
        void SetFecha(std::string fecha){fecha_=fecha;}
        void SetEstado(std::string estado){estado_=estado;}
        void SetEstudiante(Estudiante estudiante){estudiante_=estudiante;}
        void SetPrograma(Programa_SICUE programa){programa_=programa;}
        
};



#endif