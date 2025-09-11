// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creación: 10/09/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;

void convertirDinero(int monto) {
    int cantidad=0;
    cout << "Monto: " << monto << " Bs"<<endl;
    cantidad = monto / 200;
    if (cantidad > 0) {
        cout << cantidad << " billete(s) de 200 Bs"<<endl;
        monto = monto % 200;
    }

    cantidad = monto / 100;
    if (cantidad > 0) {
        cout << cantidad << " billete(s) de 100 Bs"<<endl;
        monto = monto % 100;
    }

    cantidad = monto / 50;
    if (cantidad > 0) {
        cout << cantidad << " billete(s) de 50 Bs"<<endl;
        monto = monto % 50;
    }

    cantidad = monto / 20;
    if (cantidad > 0) {
        cout << cantidad << " billete(s) de 20 Bs"<<endl;
        monto = monto % 20;
    }

    cantidad = monto / 10;
    if (cantidad > 0) {
        cout << cantidad << " billete(s) de 10 Bs"<<endl;
        monto = monto % 10;
    }

    cantidad = monto / 5;
    if (cantidad > 0) {
        cout << cantidad << " moneda(s) de 5 Bs"<<endl;
        monto = monto % 5;
    }

    cantidad = monto / 2;
    if (cantidad > 0) {
        cout << cantidad << " moneda(s) de 2 Bs"<<endl;
        monto = monto % 2;
    }

    cantidad = monto / 1;
    if (cantidad > 0) {
        cout << cantidad << " moneda(s) de 1 Bs"<<endl;
        monto = monto % 1;
    }
}

int main() {
    int monto=0;

    cout << "Ingrese el monto en Bs: ";
    cin >> monto;

    convertirDinero(monto);

    return 0;
}
