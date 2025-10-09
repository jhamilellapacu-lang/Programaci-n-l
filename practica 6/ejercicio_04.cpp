// Materia: Programaci�n I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creaci�n: 29/10/2024
// N�mero de ejercicio: 4
/*Problema planteado: Crea un programa que permita al usuario ingresar N n�meros en un vector y luego rota
el vector k posiciones a la derecha. Muestra el vector despu�s de la rotaci�n.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, k;

    cout << "Ingrese la cantidad de numeros (N): ";
    cin >> N;
    vector<int> datos(N);
    cout << "Ingrese " << N << " numeros:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> datos[i];
    }
    cout << "Ingrese cuuntas posiciones desea rotar a la derecha (k): ";
    cin >> k;
    k = k % N;
    vector<int> rotado(N);
    for (int i = 0; i < N; i++) {
        rotado[(i + k) % N] = datos[i];
    }
    cout << "Vector rotado " << k << " posiciones a la derecha:" << endl;
    for (int i = 0; i < N; i++) {
        cout << rotado[i] << " ";
    }
    cout << endl;

    return 0;
}
