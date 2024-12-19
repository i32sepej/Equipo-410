#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Asignatura {
public:
    string nombre;
    string codigo;
    int duracion;

    Asignatura(const string& nombre, const string& codigo, int duracion)
        : nombre(nombre), codigo(codigo), duracion(duracion) {}

    void mostrarAsignatura() const {
        cout << "Asignatura: " << nombre << ", Código: " << codigo << ", Duración: " << duracion << " meses." << endl;
    }
};

class PlanConvalidacion {
public:
    string nombre;
    string plan;
    int duracion;
    vector<Asignatura> asignaturas;

    PlanConvalidacion(const string& nombre, const string& plan, int duracion)
        : nombre(nombre), plan(plan), duracion(duracion) {}

    void agregarAsignatura(const Asignatura& asignatura) {
        asignaturas.push_back(asignatura);
    }

    void mostrarPlan() const {
        cout << "Plan: " << nombre << ", Duración: " << duracion << " meses." << endl;
        for (const auto& asignatura : asignaturas) {
            asignatura.mostrarAsignatura();
        }
    }
};

class Universidad {
public:
    string nombre;
    string direccion;

    Universidad(const string& nombre, const string& direccion)
        : nombre(nombre), direccion(direccion) {}

    void mostrarUniversidad() const {
        cout << "Universidad: " << nombre << ", Dirección: " << direccion << endl;
    }
};

class Solicitud {
public:
    string nombreSolicitante;
    string tipo;
    string plan;
    string universidad;
    string becaSolicitada;

    Solicitud(const string& nombreSolicitante, const string& tipo, const string& plan, const string& universidad)
        : nombreSolicitante(nombreSolicitante), tipo(tipo), plan(plan), universidad(universidad), becaSolicitada("") {}

    void mostrarSolicitud() const {
        cout << "Nombre Solicitante: " << nombreSolicitante
             << ", Tipo: " << tipo
             << ", Plan: " << plan
             << ", Universidad: " << universidad;
        if (!becaSolicitada.empty()) {
            cout << ", Beca Solicitada: " << becaSolicitada;
        }
        cout << endl;
    }

    void modificarSolicitud(const string& nuevoPlan, const string& nuevaUniversidad) {
        plan = nuevoPlan;
        universidad = nuevaUniversidad;
    }

    void asignarBeca(const string& beca) {
        becaSolicitada = beca;
    }
};

class ListaSolicitudes {
private:
    vector<Solicitud> solicitudes;

public:
    void agregarSolicitud(const Solicitud& solicitud) {
        solicitudes.push_back(solicitud);
    }

    void mostrarSolicitudes() const {
        if (solicitudes.empty()) {
            cout << "No hay solicitudes registradas." << endl;
            return;
        }

        for (size_t i = 0; i < solicitudes.size(); ++i) {
            cout << i + 1 << ". ";
            solicitudes[i].mostrarSolicitud();
        }
    }

    bool eliminarSolicitud(const string& nombre) {
        for (auto it = solicitudes.begin(); it != solicitudes.end(); ++it) {
            if (it->nombreSolicitante == nombre) {
                solicitudes.erase(it);
                return true;
            }
        }
        return false;
    }

    Solicitud* obtenerSolicitudPorNombre(const string& nombre) {
        for (auto& solicitud : solicitudes) {
            if (solicitud.nombreSolicitante == nombre) {
                return &solicitud;
            }
        }
        return nullptr;
    }
};

void mostrarMenu() {
    cout << "\n--- Menú Principal ---\n";
    cout << "1. Registrar y guardar solicitud\n";
    cout << "2. Mostrar solicitudes\n";
    cout << "3. Información de contacto\n";
    cout << "4. Modificar solicitud\n";
    cout << "5. Borrar una solicitud\n";
    cout << "6. Solicitar beca\n";
    cout << "7. Salir\n";
    cout << "Selecciona una opción: ";
}

void mostrarContacto() {
    cout << "\n--- Información de Contacto ---\n";
    cout << "1. Oficina UCO: Teléfono 957869733, Email: uco@universidad.com\n";
    cout << "2. Oficina de Relaciones Internacionales: Teléfono 999888777, Email: ori@universidad.com\n";
}

void registrarSolicitud(ListaSolicitudes& lista) {
    string nombre, tipo, plan;
    cout << "Nombre: ";
    cin.ignore();
    getline(cin, nombre);
    cout << "Tipo (Alumno/Profesor): ";
    cin >> tipo;

    if (tipo == "Alumno") {
        cout << "Elige un plan de convalidación:" << endl;
        vector<PlanConvalidacion> planes = {
            PlanConvalidacion("Plan 1: 5 asignaturas, 4 meses", "Convalidación corta", 4),
            PlanConvalidacion("Plan 2: 10 asignaturas, 8 meses", "Convalidación larga", 8)
        };

        for (int i = 0; i < planes.size(); ++i) {
            cout << i + 1 << ". " << planes[i].nombre << endl;
        }

        int eleccion;
        cin >> eleccion;
        plan = planes[eleccion - 1].nombre;

        cout << "Elige una universidad:" << endl;
        vector<Universidad> universidades = {
            Universidad("Universidad de Málaga", "Calle Larios"),
            Universidad("Universidad de Oviedo", "Parroquia San Berni"),
            Universidad("Universidad Complutense de Madrid", "Quevedo")
        };

        for (int i = 0; i < universidades.size(); ++i) {
            cout << i + 1 << ". " << universidades[i].nombre << endl;
        }

        int universidadEleccion;
        cin >> universidadEleccion;
        string universidadSeleccionada = universidades[universidadEleccion - 1].nombre;

        Solicitud nuevaSolicitud(nombre, tipo, plan, universidadSeleccionada);
        lista.agregarSolicitud(nuevaSolicitud);
        cout << "Solicitud guardada." << endl;

    } else if (tipo == "Profesor") {
        cout << "Selecciona una asignatura:" << endl;
        vector<Asignatura> asignaturas = {
            Asignatura("Cálculo", "CAL001", 8),
            Asignatura("Álgebra Lineal", "ALG001", 8),
            Asignatura("Ingeniería de Software", "INS001", 8)
        };

        for (int i = 0; i < asignaturas.size(); ++i) {
            cout << i + 1 << ". " << asignaturas[i].nombre << endl;
        }

        int asignaturaEleccion;
        cin >> asignaturaEleccion;
        plan = asignaturas[asignaturaEleccion - 1].nombre;

        cout << "Elige una universidad:" << endl;
        vector<Universidad> universidades = {
            Universidad("Universidad de Málaga", "Calle Larios"),
            Universidad("Universidad de Oviedo", "Parroquia San Berni"),
            Universidad("Universidad Complutense de Madrid", "Quevedo")
        };

        for (int i = 0; i < universidades.size(); ++i) {
            cout << i + 1 << ". " << universidades[i].nombre << endl;
        }

        int universidadEleccion;
        cin >> universidadEleccion;
        string universidadSeleccionada = universidades[universidadEleccion - 1].nombre;

        Solicitud nuevaSolicitud(nombre, tipo, plan, universidadSeleccionada);
        lista.agregarSolicitud(nuevaSolicitud);
        cout << "Solicitud guardada." << endl;

    } else {
        cout << "Tipo no válido." << endl;
    }
}

void solicitarBeca(ListaSolicitudes& lista) {
    string nombre;
    cout << "Introduce tu nombre para solicitar una beca: ";
    cin.ignore();
    getline(cin, nombre);

    Solicitud* solicitud = lista.obtenerSolicitudPorNombre(nombre);
    if (solicitud) {
        if (solicitud->tipo == "Alumno") {
            cout << "Selecciona una beca disponible:" << endl;
            vector<string> becas = {
                "Beca Excelencia Académica",
                "Beca Deportiva",
                "Beca de Investigación"
            };

            for (int i = 0; i < becas.size(); ++i) {
                cout << i + 1 << ". " << becas[i] << endl;
            }

            int seleccion;
            cin >> seleccion;

            if (seleccion > 0 && seleccion <= becas.size()) {
                solicitud->asignarBeca(becas[seleccion - 1]);
                cout << "Has solicitado la beca: " << becas[seleccion - 1] << endl;
            } else {
                cout << "Selección inválida." << endl;
            }
        } else {
            cout << "Solo los estudiantes pueden solicitar becas." << endl;
        }
    } else {
        cout << "No se encontró ninguna solicitud con ese nombre." << endl;
    }
}

int main() {
    ListaSolicitudes listaSolicitudes;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarSolicitud(listaSolicitudes);
                break;
            case 2:
                listaSolicitudes.mostrarSolicitudes();
                break;
            case 3:
                mostrarContacto();
                break;
            case 4: {
                string nombre;
                cout << "Nombre de la solicitud a modificar: ";
                cin.ignore();
                getline(cin, nombre);

                Solicitud* solicitud = listaSolicitudes.obtenerSolicitudPorNombre(nombre);
                if (solicitud) {
                    string nuevoPlan, nuevaUniversidad;
                    cout << "Nuevo plan: ";
                    getline(cin, nuevoPlan);
                    cout << "Nueva universidad: ";
                    getline(cin, nuevaUniversidad);

                    solicitud->modificarSolicitud(nuevoPlan, nuevaUniversidad);
                    cout << "Solicitud modificada." << endl;
                } else {
                    cout << "Solicitud no encontrada." << endl;
                }
                break;
            }
            case 5: {
                string nombre;
                cout << "Nombre de la solicitud a borrar: ";
                cin.ignore();
                getline(cin, nombre);

                if (listaSolicitudes.eliminarSolicitud(nombre)) {
                    cout << "Solicitud eliminada correctamente." << endl;
                } else {
                    cout << "No se encontró una solicitud con ese nombre." << endl;
                }
                break;
            }
            case 6:
                solicitarBeca(listaSolicitudes);
                break;
            case 7:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }
    } while (opcion != 7);

    return 0;
}
