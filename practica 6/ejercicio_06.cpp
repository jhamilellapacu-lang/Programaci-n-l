// Materia: Programación I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 29/10/2024
// Número de ejercicio: 6
/*Problema planteado: Rango de calificaciones en un curso: Un maestro tiene N calificaciones de sus
estudiantes en un vector. Las calificaciones deben ser llenadas en forma aleatoria entre 0
y 100. Luego debe calcular el porcentaje de estudiantes en cada rango:*/
#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>  
using namespace std;
int main() {
    int N;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;
    vector<int> calificaciones(N);
    srand(time(0));
    for (int i = 0; i < N; i++) {
        calificaciones[i] = rand() % 101; 
    }
    int reprobado = 0, regular = 0, bueno = 0, excelente = 0;
    for (int i = 0; i < N; i++) {
        int nota = calificaciones[i];
        if (nota <= 59) {
            reprobado++;
        } else if (nota <= 79) {
            regular++;
        } else if (nota <= 89) {
            bueno++;
        } else {
            excelente++;
        }
    }
    cout << "Calificaciones generadas: "<<endl;
    for (int i = 0; i < N; i++) {
        cout << calificaciones[i] << " ";
    }
    cout << "Porcentajes por rango:" << endl;
    cout << "Reprobados: " << (reprobado * 100 / N) << "%" << endl;
    cout << "Regulares: " << (regular * 100 / N) << "%" << endl;
    cout << "Buenos:    " << (bueno * 100 / N) << "%" << endl;
    cout << "Excelentes:" << (excelente * 100 / N) << "%" << endl;

    return 0;
}
