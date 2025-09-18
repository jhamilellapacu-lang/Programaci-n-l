// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 17/09/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

int calcularMCD(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int calcularMCM(int m, int n) {
    return (m * n) / calcularMCD(m, n);
}

int main() {
    int m, n;
    cout << "Ingrese dos numeros positivos: ";
    cin >> m >> n;

    int mcd = calcularMCD(m, n);
    int mcm = calcularMCM(m, n);

    cout << "MCD: " << mcd << endl;
    cout << "MCM: " << mcm << endl;

    return 0;
}
