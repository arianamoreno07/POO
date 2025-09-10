#include "Prerequisites.h"
#include "Estudiante.h"

int
main() {

    Estudiante Estudiante[5];
    Estudiante[0].setEstudiante("Juan Perez", 20);
    Estudiante[1].setEstudiante("Maria Gomez", 22);
    Estudiante[2].setEstudiante("Carlos Ruiz", 19);
    Estudiante[3].setEstudiante("Ana Torres", 21);
    Estudiante[4].setEstudiante("Luis Fernandez", 23);

    for (int i = 0; i < 5; ++i) {
        Estudiante[i].Informacion();
    }
    


    Fecha fecha;
    fecha.getFecha();
    std::cin.get();

    


    return 0;

};
