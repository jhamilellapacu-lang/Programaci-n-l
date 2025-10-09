// Materia: Programación I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 29/10/2024
// Número de ejercicio: 1
/*Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir
de este arreglo determine la desviación típica.*/
#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;
int main() {
    vector<int> edades;
    int edad=0, n=0;
    float suma=0, media=0, suma_cuadrados=0, desviacion=0;

    cout << "Ingrese edades(hasta -1):" << endl;

    cin >> edad;
    while (edad != -1) {
        edades.push_back(edad);
        cin >> edad;
    }

    n = edades.size();
    if (n == 0) {
        cout << "No se ingresaron edades validas." << endl;
        return 0;
    }

    suma = 0;
    for (int i = 0; i < n; i++) {
        suma += edades[i];
    }
    media = suma / n;
    suma_cuadrados = 0;
    for (int i = 0; i < n; i++) {
        suma_cuadrados += pow(edades[i] - media, 2);
    }
    desviacion = sqrt(suma_cuadrados / n);
    cout << "La desviación tipica es: " << desviacion << endl;

    return 0;
}
