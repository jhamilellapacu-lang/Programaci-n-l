// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creación: 10/09/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

int calcularDiferencia(int minutosTrabajados) {
    int jornada = 480; 
    return minutosTrabajados - jornada;
}


int main() {
    int minutos=0, diferencia=0;

    cout << "Ingrese el tiempo trabajado en minutos: ";
    cin >> minutos;
    diferencia = calcularDiferencia(minutos);
    if (diferencia > 0) {
        cout << "Tiempo extra trabajado: " << diferencia << " minutos"<<endl;
    } else if (diferencia < 0) {
        cout << "Tiempo que debe a la empresa: " << -diferencia << " minutos"<<endl;
    } else {
        cout << "Ha cumplido exactamente la jornada laboral."<<endl;
    }

    return 0;
}

