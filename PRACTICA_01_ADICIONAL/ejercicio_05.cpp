// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 1093560
// Carrera del estudiante: Ing. Sistemas
// Fecha creación: 03/10/2025
#include <iostream>
using namespace std;


double ParteFraccionaria(double numero) {
    return numero - (int)numero;
}

int main() {
    double valor;
    cout << "Ingrese un numero con decimales: ";
    cin >> valor;

    double fraccion = ParteFraccionaria(valor);
    cout << "La parte fraccionaria es: " << fraccion << endl;

    return 0;
}
