// Materia: Programaci�n I, Paralelo 4
// Autor: Jhamile LLapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 08/09/2025
// N�mero de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int cantidad=0, ninno1=0, ninno2=0, ninno3=0, edad=0, total=0, consumo;
    cout << "Ingrese el n�mero total de ni�os: "<<endl;
    cin >> cantidad;
    srand(time(0));
    while (total < cantidad) {
        int edad = rand() % 3 + 1;
        if (total + 1 <= cantidad) {
            if (edad == 1) {
            	ninno1++;
		  }
		  
            else if (edad == 2) {
            	ninno2++;
		  }
            else {
            	ninno3++;
		  }
            total++;
        }
    }

    consumo = ninno1 * 6 + ninno2 * 3 + ninno3 * 2;

    cout << "Ninnos de 1 anno: " << ninno1 << endl;
    cout << "Ninnos de 2 annos: " << ninno2 << endl;
    cout << "Ninnos de 3 annos: " << ninno3 << endl;
    cout << "Consumo total de pannales por dia: " << consumo << endl;

    return 0;
}

