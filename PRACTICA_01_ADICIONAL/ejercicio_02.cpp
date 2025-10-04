/*Obtener el promedio de números primos introducidos por teclado, el algoritmo debe
verificar si el número ingresado es primo se detiene cuando se lea un número negativo o
cero.*/
// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 1093560
// Carrera del estudiante: Ing. Sistemas
// Fecha creación: 03/10/2025
#include <iostream>
using namespace std;

int main() {
    int numero= 0, divisores= 0, cantidad= 0;
    float suma=0.0, promedio = 0.0;

    cout << "Ingrese los numeros :" << endl;
    cin >> numero;

    while (numero > 0) {
        divisores= 0;

        for (int i= 1; i<= numero; i++) {
            if (numero % i== 0) {
                divisores++;
            }
          }
        
        if (divisores== 2) {
            suma+= numero;
            cantidad++;
        }

        cin >>numero;
    }

    if (cantidad > 0) {
        promedio = suma / cantidad;
        cout << "El promedio de numeros primos es: " << promedio << endl;
    } else {
        cout << "No ingreso numeros primos" << endl;
    }

    return 0;
}
