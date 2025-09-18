#include <iostream>
using namespace std;
float calcularComision(float totalVendido) {
    return totalVendido * 0.10;
}

float calcularSueldoTotal(float sueldoBasico, float totalVendido) {
    return sueldoBasico + calcularComision(totalVendido);
}

int main() {
    int cantidad=0;
    cout << "Ingrese el numero de vendedoras: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        float sueldoBasico=0.0, totalVendido=0.0, comision=0.0, sueldoTotal=0.0;
        cout << "Vendedora " << i << endl;
        cout << "Ingrese el sueldo basico: ";
        cin >> sueldoBasico;
        cout << "Ingrese el total vendido en el mes: ";
        cin >> totalVendido;

        comision = calcularComision(totalVendido);
        sueldoTotal = calcularSueldoTotal(sueldoBasico, totalVendido);

        cout << "Comision extra: " << comision << " Bs" << endl;
        cout << "Sueldo total a cancelar: " << sueldoTotal << " Bs" << endl;
    }









    return 0;
}
