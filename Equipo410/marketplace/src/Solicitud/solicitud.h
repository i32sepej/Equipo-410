#ifndef SOLICITUD_H
#define SOLICITUD_H

#include <string>
#include "../Estudiante/estudiante.h"
#include "../ProgramaSICUE/programa_SICUE.h"

class Solicitud{
    private:
        std::string tipo_;
        std::string plan_;
        std::string universidad_;
        std::string estudiante_;
        std::string beca_;
    public:
        Solicitud(const std::string &estudiante, const std::string &tipo, std::string plan, const std::string universidad) : estudiante_(estudiante), tipo_(tipo), plan_(plan), universidad_(universidad){}
        void mostrarSolicitud(Solicitud solicitud){
            std::cout << solicitud.GetTipo() << "\n"
            << solicitud.GetPlan() << "\n"
            << solicitud.GetUniversidad() << "\n"
            << solicitud.GetEstudiante() << std::endl; 
            if(beca_.empty()){
                std::cout << "Beca solicitada: " << beca_ << std::endl; 
            }
        }
        void modificarSolicitud(const std::string& nuevoPlan, const std::string& nuevaUniversidad){
            plan_=nuevoPlan;
            universidad_=nuevaUniversidad;
        }
        void asignarBeca(const std::string& beca){
            beca_=beca;
        }
        std::string GetBeca(){return beca_;}
        std::string GetPlan(){return plan_;}
        std::string GetUniversidad(){return universidad_;}
        std::string GetTipo(){return tipo_;}
        std::string GetEstudiante(){return estudiante_;}
        void SetPlan(std::string plan){plan_=plan;}
        void SetPlan(std::string universidad){universidad_=universidad;}
        void SetTipo(std::string tipo){tipo_=tipo;}
        void SetEstudiante(std::string estudiante){estudiante_=estudiante;}

        
};


#endif