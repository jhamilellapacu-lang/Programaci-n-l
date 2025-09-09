// Materia: Programación I, Paralelo 4
// Autor: Jhamile LLapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 08/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numero=0, cantidad=0, suma = 0, valorMayor = 0, valorMenor = 1001;
    float promedio=0;
    cout << "Ingrese la cantidad de numeros aleatorios: "<<endl;
    cin >> cantidad;

    for (int i = 0; i < cantidad; ++i) {
        numero = rand() % 1000 + 1;
        cout << numero<< " "<<endl;
        suma += numero;
        if (numero > valorMayor) {
        	valorMayor = numero;
        }
	   
        if (numero < valorMenor) {
        	valorMenor = numero;
	   }
	   
    }

    promedio = (suma) / cantidad;

    cout << "Suma total: " << suma<<endl;
    cout << "Promedio: " << promedio<<endl;
    cout << "Mayor valor: " << valorMayor<<endl;
    cout << "Menor valor: " << valorMenor<< endl;

    return 0;
}
