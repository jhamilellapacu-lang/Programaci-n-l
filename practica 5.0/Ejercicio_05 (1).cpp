// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 5
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la dimensión de los vectores: ";
    cin >> N;

    vector<int> A(N), B(N), C;

    cout << "Ingrese los elementos del vector A:\n";
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "Ingrese los elementos del vector B:\n";
    for (int i = 0; i < N; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    for (int i = 0; i < N; i++) {
        C.push_back(A[i]);
    }
    for (int i = 0; i < N; i++) {
        C.push_back(B[i]);
    }

    cout << "Vector combinado C:\n";
    for (int i = 0; i < C.size(); i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}