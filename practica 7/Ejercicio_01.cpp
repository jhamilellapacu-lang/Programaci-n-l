// Materia: Programacion 1, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 15/10/25
// Numero de Ejercicio: 1
/*Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 por la fila
n.*/

#include <iostream>
#include <vector>
using namespace std;
void leerMatriz(vector< vector<int> > &matriz, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> matriz[i][j];
        }
    }
}
void cambiarFilas(vector< vector<int> > &matriz, int n) 
{
    vector<int> temp = matriz[0];
    matriz[0] = matriz[n - 1];
    matriz[n - 1] = temp;
}
void mostrarMatriz(const vector< vector<int> > &matriz, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int main() 
{
    int n;
    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> n;
    vector< vector<int> > matriz(n, vector<int>(n));
    cout << "Ingrese los elementos de la matriz:\n";
    leerMatriz(matriz, n);
    cambiarFilas(matriz, n);
    cout << "La nueva matriz es:\n";
    mostrarMatriz(matriz, n);
    return 0;
}
