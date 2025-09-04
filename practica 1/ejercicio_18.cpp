// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio: 18
//Crea un programa para mostrar los primero 100 número primos.
#include <iostream>
using namespace std;

int main() {
    int cantidad = 0, numero=2, divisor=0;
    
    while (cantidad < 100) {
          divisor = 0;

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisor++;
            }
        }

        if (divisor == 2) {
            cout << numero << " ";
            cantidad++;
        }

        numero++;
    }

    return 0;
}
