// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 1093560
// Carrera del estudiante: Ing. Sistemas
// Fecha creación: 03/10/2025
#include <iostream>
using namespace std;
int encontrarMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y, maximo;
    cout<< "Ingrese el primer numero: "<<endl;
    cin>> x;
    cout<< "Ingrese el segundo numero: "<<endl;
    cin>> y;
    maximo = encontrarMax(x, y);
    cout << "El numero mayor es: " << maximo << endl;
    return 0;
}
