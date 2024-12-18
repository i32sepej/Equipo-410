#include "solicitud.h"
#include "../Estudiante/estudiante.h"
#include "../ProgramaSICUE/programa_SICUE.h"

main(){
    Estudiante estudiante("Carlos", "Informatica", "Intercambio2024");
    Programa_SICUE programa("Universidad A", "Universidad B", 6);
    Solicitud solicitud(12, "01-06-2024", "Pendiente", estudiante, programa );
    
}