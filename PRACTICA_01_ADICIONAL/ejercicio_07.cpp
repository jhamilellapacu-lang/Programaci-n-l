// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 1093560
// Carrera del estudiante: Ing. Sistemas
// Fecha creación: 03/10/2025
#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;

void lanzarMoneda(int cantidad) {
    int caras = 0, cruces = 0, resultado= 0;
    float porcentajeCaras =0.0, porcentajeCruces= 0.0;
    srand(time(0));
    for (int i= 0; i< cantidad; i++) {
        resultado= rand() % 2; 
        if (resultado== 1) {
            caras++;
        } 
	   else {
            cruces++;
        }
    }
    porcentajeCaras = caras * 100.0 / cantidad;
    porcentajeCruces = cruces * 100.0 / cantidad;

    cout << "Resultados tras " << cantidad << " lanzamientos: "<<endl;
    cout << "Caras: " << porcentajeCaras << " %"<<endl;
    cout << "Cruces: " << porcentajeCruces << " %"<<endl;
}
int main() {
    int lanzamientos=0;
    cout << "Escriba la cantidad de veces que va a lanzar la moneda";
    cin >> lanzamientos;

    if (lanzamientos > 0) {
        lanzarMoneda(lanzamientos);
    } else {
        cout << "Debe ingresar un numero positivo"<<endl;
    }

    return 0;
}
