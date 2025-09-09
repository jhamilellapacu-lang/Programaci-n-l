// Materia: Programación I, Paralelo 4
// Autor: Jhamile LLapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 08/09/2025
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    int numero=0, cantidad=0, cantidadPrimos, divisor= 0;
    cout << "Ingrese la cantidad de numeros aleatorios: "<<endl;
    cin >> cantidad;
    srand(time(0)); 
    for (int i = 0; i < cantidad; ++i) {
        numero = rand() % 10000 + 1; 
        cout << numero << " "<<endl;
        divisor = 0;
        for (int j = 1; j <= numero; ++j) {
            if (numero % j == 0)
                divisor++;
        }

        if (divisor == 2)
            cantidadPrimos++;
    }

    cout << "Cantidad de numeros primos: " << cantidadPrimos << endl;
    return 0;
}
