// Materia: Programación I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 29/10/2024
// Número de ejercicio: 3
/*Problema planteado: Se tiene 3 vectores de 10 elementos cada uno:
• Vector de nombres.
• Vector Apellidos
• Vector de Edad
Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla.
Esto debe realizar N veces.*/

#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    vector<string> nombres = {"Ana", "Luis", "Carlos", "Maria", "Jorge", "Lucia", "Pedro", "Sofia", "Diego", "Valeria"};
    vector<string> apellidos = {"Gomez", "Perez", "Torres", "Ramirez", "Flores", "Vargas", "Mendoza", "Rojas", "Castro", "Fernandez"};
    vector<int> edades = {23, 35, 42, 19, 28, 31, 45, 22, 38, 26};

    int N;
    cout << "Cuantas veces desea mostrar datos aleatorios: ";
    cin >> N;
    srand(time(0));
    for (int i = 0; i < N; i++) {
        int pos = rand() % 10; 
        cout << "Persona " << i + 1 << ": " << nombres[pos] << " " << apellidos[pos]
             << ", Edad: " << edades[pos] << " años" << endl;
    }

    return 0;
}
