// Materia: Programaci�n I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creaci�n: 29/10/2024
// N�mero de ejercicio: 7
/*Problema planteado: Compresi�n de datos en una imagen en escala de grises: Dada una imagen en escala
de grises representada por un vector de N valores entre 0 y 255 (estos valores deben ser
generados aleatoriamente), agrupa los valores en segmentos de 10 unidades y muestra
cu�ntos p�xeles hay en cada rango.*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int N;
    cout << "Ingrese la cantidad de p�xeles: ";
    cin >> N;
    vector<int> pixeles(N);
    srand(time(0));
    for (int i = 0; i < N; i++) {
        pixeles[i] = rand() % 256;
    }
    cout << "Pixeles:" << endl;
    for (int i = 0; i < N; i++) {
        cout << pixeles[i] << " ";
    }
    cout << "\n\n";
    const int RANGOS = 26;
    vector<int> contador(RANGOS, 0);
    for (int i = 0; i < N; i++) {
        int indice = pixeles[i] / 10;
        contador[indice]++;
    }
    for (int i = 0; i < RANGOS; i++) {
        int inicio = i * 10;
        int fin;
        if (i == 25) {
            fin = 255;
        } else {
            fin = inicio + 9;
        }
        cout << inicio << "-" << fin << ": " << contador[i] << " p�xeles" << endl;
    }
    return 0;
}
