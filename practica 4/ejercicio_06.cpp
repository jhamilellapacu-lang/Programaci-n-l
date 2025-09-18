// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 17/09/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;
int sumarDigitosNoCero(int numero) {
    int suma = 0;
    while (numero > 0) {
        int digito = numero % 10;
        if (digito != 0) suma += digito;
        numero /= 10;
    }
    return suma;
}
int esPrimo(int numero) {
    if (numero < 2) return 0;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return 0;
    }
    return 1;
}
int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    int suma = sumarDigitosNoCero(numero);
    cout << "Suma de digitos distintos de cero: " << suma << endl;
    if (esPrimo(suma) == 1)
        cout << "La suma es un numero primo." << endl;
    else
        cout << "La suma no es un numero primo." << endl;
    return 0;
}

