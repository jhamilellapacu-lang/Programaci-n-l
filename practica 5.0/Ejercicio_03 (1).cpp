// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 3
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int N;
    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> N;
    vector<int> calificaciones(N);
    vector<float> desviacion(N);
    float suma = 0;      
    float promedio, varianza, sumaCuadrados = 0;
    for (int i = 0; i < N; i++) {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];  
    }
    promedio = suma / N;  
    for (int i = 0; i < N; i++) {
        desviacion[i] = calificaciones[i] - promedio;
    }
    cout << " Calificacion    Desviacion ";
    for (int i = 0; i < N; i++) {
        cout << calificaciones[i] << "\t\t" << desviacion[i] << endl;
    }

    for (int i = 0; i < N; i++) {
        sumaCuadrados += desviacion[i] * desviacion[i];
    }
    varianza = sumaCuadrados / N;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Varianza: " << varianza << endl;
    return 0;
}
