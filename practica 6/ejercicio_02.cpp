// Materia: Programación I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 29/10/2024
// Número de ejercicio: 2
/*Problema planteado:  Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y
otro contiene los nombres de estos minerales, para obtener:
• Buscar por nombre de mineral y desplegar la producción
• Ordenar del mayor al menor (producción) y mostrar:*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    const int N = 6;
    const string minerales[N] = {"SN", "SB", "AU", "PT", "AG", "CU"};
    const double produccion[N] = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};
    string buscado;
    cout << "Ingrese el nombre del mineral a buscar (ej. SN): ";
    cin >> buscado;
    bool encontrado = false;
    for (int i = 0; i < N; i++) {
        if (minerales[i] == buscado) {
            cout << "Produccion de " << minerales[i] << ": " << produccion[i] << " " << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "Mineral no encontrado." << endl;
    }
    string mineralesOrdenados[N];
    double produccionOrdenada[N];
    for (int i = 0; i < N; i++) {
        mineralesOrdenados[i] = minerales[i];
        produccionOrdenada[i] = produccion[i];
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (produccionOrdenada[i] < produccionOrdenada[j]) {
                double tempProd = produccionOrdenada[i];
                produccionOrdenada[i] = produccionOrdenada[j];
                produccionOrdenada[j] = tempProd;
                string tempNom = mineralesOrdenados[i];
                mineralesOrdenados[i] = mineralesOrdenados[j];
                mineralesOrdenados[j] = tempNom;
            }
        }
    }
    cout << "Mineral  Produccion " << endl;
    for (int i = 0; i < N; i++) {
        string nombre = mineralesOrdenados[i];
        if (nombre.length() == 2) nombre += "  "; 
        else if (nombre.length() == 3) nombre += " ";

        cout << nombre << "     " << produccionOrdenada[i] << endl;
    }

    return 0;
}
