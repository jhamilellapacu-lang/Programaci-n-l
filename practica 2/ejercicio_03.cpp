// Materia: Programaci�n I, Paralelo 4
// Autor: Jhamile LLapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 08/09/2025
// N�mero de ejercicio: 3

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
