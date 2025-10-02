// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;

int main() {
    double voltios[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout << "Voltajes registrados: "<<endl;
    for (int i = 0; i < 9; i++) {
        cout << voltios[i] << " ";
        if ((i + 1) % 3 == 0) 
        cout << endl;  
    }

    return 0;
}