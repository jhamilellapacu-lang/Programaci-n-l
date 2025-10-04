// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 1093560
// Carrera del estudiante: Ing. Sistemas
// Fecha creación: 03/10/2025
#include <iostream>
using namespace std;
bool esPar(int numero) {
    return numero % 2 == 0;
}
int main() {
    int valor;
    cout << "Ingrese un numero entero: ";
    cin >> valor;

    if (esPar(valor)) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }

    return 0;
}
