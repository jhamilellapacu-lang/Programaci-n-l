// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creación: 10/09/2025
// Número de ejercicio: 5

#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generarNota() {
    return rand() % 100 + 1;
}

float calcularPromedioPonderado(int nota1, int nota2, int nota3, int nota4) {
    int peso1 = 10, peso2 = 20, peso3 = 30, peso4 = 40, sumaPesos=0;
    float sumaPonderada=0.0;
    
    sumaPesos = peso1 + peso2 + peso3 + peso4;
    sumaPonderada = nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4;
    return sumaPonderada / sumaPesos;
}

int main() {
    srand(time(0));  

    int nota1 = generarNota();
    int nota2 = generarNota();
    int nota3 = generarNota();
    int nota4 = generarNota();
    float promedio=0;
    cout << "Notas generadas:"<<endl;
    cout << "Nota 1: " << nota1 <<endl;
    cout << "Nota 2: " << nota2 <<endl;
    cout << "Nota 3: " << nota3 <<endl;
    cout << "Nota 4: " << nota4 <<endl;

    promedio = calcularPromedioPonderado(nota1, nota2, nota3, nota4);
    cout << "Promedio ponderado: " << promedio << endl;

    return 0;
}
