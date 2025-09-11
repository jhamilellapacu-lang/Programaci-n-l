// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creación: 10/09/2025
// Número de ejercicio: 11

#include <iostream>
using namespace std;

double retirarDinero(double saldo, double cantidad) {
    if (cantidad > saldo) {
        cout << "Error: Saldo insuficiente" << endl;
        return saldo;
    }
    
    int parteEntera = cantidad;
    if (cantidad != parteEntera || parteEntera % 10 != 0) {
        cout << "Error: La cantidad debe ser multiplo de 10" << endl;
        return saldo;
    }
    
    saldo -= cantidad;
    cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl;
    return saldo;
}

int main() {
    double saldo = 1000.0;
    double cantidad;
    
    cout << "Saldo actual: " << saldo << endl;
    cout << "Ingrese la cantidad a retirar: ";
    cin >> cantidad;
    
    saldo = retirarDinero(saldo, cantidad);
    
    return 0;
}
