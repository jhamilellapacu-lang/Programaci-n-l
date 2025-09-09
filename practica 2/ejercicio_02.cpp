// Materia: Programación I, Paralelo 4
// Autor: Jhamile LLapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 08/09/2025
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    
    int lanzamientos=0, caras = 0, cruz = 0, moneda=0;
    float porcentajeCaras = 0.0, porcentajeCruz = 0.0 ;
    srand(time(0)); 
    cout << "Ingrese el numero de lanzamientos de la moneda: ";
    cin >> lanzamientos;

    for (int i = 0; i < lanzamientos; ++i) {
        moneda = rand() % 2; 
        if (moneda == 1) {
        	caras++;
	   }
	   
        else{
          cruz++;	
	   }
	    
    }

     porcentajeCaras = (caras * 100.0) / lanzamientos;
     porcentajeCruz = (cruz * 100.0) / lanzamientos;

    cout << "Porcentaje de caras: " << porcentajeCaras << "%"<<endl;
    cout << "Porcentaje de cruz: " << porcentajeCruz << "%"<<endl;
    return 0;

}
