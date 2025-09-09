// Materia: Programación I, Paralelo 4
// Autor: Jhamile LLapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 08/09/2025
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   

    int numero = 0, factorial = 1; 
    srand(time(0)); 
    numero = rand() % 10 + 1; 
    for (int i = 2; i <= numero; ++i) {
        factorial *= i;
    }

    cout << "Numero ya generado: " << numero << endl;
    cout << "Factorial: " << factorial << endl;

    return 0;
}
