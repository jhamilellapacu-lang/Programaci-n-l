// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

int main() {
    const int tamano = 10;
    int vector[tamano];
    int contador = 0;
    int numero;

    cout << "Ingrese hasta 10 numeros enteros: "<<endl;

    while (contador < tamano && numero >= 0) {
        cout << "Numero " << contador + 1 << ": ";
        cin >> numero;

        if (numero >= 0) {
            vector[contador] = numero;
            contador++;
        }
    }

    cout << "Elementos introducidos: "<<endl;
    for (int i = 0; i < contador; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}