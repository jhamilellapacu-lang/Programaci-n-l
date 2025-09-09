// Materia: Programación I, Paralelo 4
// Autor: Jhamile LLapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 08/09/2025
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    int lanzamientos=0, pares = 0, dado=0;
    srand(time(0)); 
    cout << "Ingrese el numero de lanzamientos del dado: ";
    cin >> lanzamientos;

    for (int i = 0; i < lanzamientos; ++i) {
        dado = rand() % 6 + 1; 
        if (dado % 2 == 0){
        	pares++;
	   }
	       
    }

    cout << "Frecuencia de caras pares es: " << pares << " de " << lanzamientos << " lanzamientos";
    return 0;
}
