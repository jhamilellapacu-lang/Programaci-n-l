// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creación: 10/09/2025
// Número de ejercicio: 4

#include<iostream>
using namespace std;

void capicua(int numero) {
    int original=0, invertido=0,digito;
    original=numero;

    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    if (original == invertido)
        cout << "Es capicua" << endl;
    else
        cout << "No es capicua" << endl;
}

int main() {
    int valor;
    cout << "Ingrese un numero: ";
    cin >> valor;

    capicua(valor);
    return 0;
}

