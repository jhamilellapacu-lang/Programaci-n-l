// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int vector1[N], vector2[N], vector3[N];

    cout << "Ingrese los valores para vector1: "<<endl;
    for (int i = 0; i < N; i++) {
        cout << "vector1[" << i << "]: ";
        cin >> vector1[i];
    }
    
    cout << "Ingrese los valores para vector2: "<<endl;
    for (int i = 0; i < N; i++) {
        cout << "vector2[" << i << "]: ";
        cin >> vector2[i];
    }

    for (int i = 0; i < N; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    
    cout << "Resultado de vector3 = vector1 + vector2: "<<endl;
    for (int i = 0; i < N; i++) {
        cout << "vector3[" << i << "] = " << vector3[i] << endl;
    }

    return 0;
}