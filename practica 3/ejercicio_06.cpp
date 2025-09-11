// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creación: 10/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int esBisiesto(int anno) {
    if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int dias_mes(int anno, int mes) {
    int dias=0;

    if (mes == 2) {
        if (esBisiesto(anno) == 1) {
            dias = 29;
        } else {
            dias = 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
    } else {
        dias = 31;
    }

    return dias;
}

int main() {
    int anno=0, mes=0, resultado=0;

    cout << "Ingrese el anno: ";
    cin >> anno;

    cout << "Ingrese el mes del 1-12: ";
    cin >> mes;

    resultado = dias_mes(anno, mes);
    cout << "El mes " << mes << " del año " << anno << " tiene " << resultado << " días.\n";

    return 0;
}
