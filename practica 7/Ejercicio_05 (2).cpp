// Materia: Programacion 1, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 15/10/25
// Numero de Ejercicio: 5
//Multiplique dos matrices una de N x M y la otra de M x N
#include <iostream>
using namespace std;
void leerMatriz(int filas, int columnas, int matriz[100][100]) 
{
    for (int i = 0; i < filas; i++) 
    {
        for (int j = 0; j < columnas; j++) 
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}
void multiplicarMatrices(int A[100][100], int B[100][100], int C[100][100], int N, int M) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            C[i][j] = 0;
            for (int k = 0; k < M; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void mostrarMatriz(int filas, int columnas, int matriz[100][100]) 
{
    for (int i = 0; i < filas; i++) 
    {
        for (int j = 0; j < columnas; j++) 
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
int main() 
{
    int N, M;
    int A[100][100], B[100][100], C[100][100];
    cout << "Ingrese N (filas de la primera y columnas de la segunda): ";
    cin >> N;
    cout << "Ingrese M (columnas de la primera y filas de la segunda): ";
    cin >> M;
    cout << "\nIngrese los elementos de la primera matriz (" << N << "x" << M << "):\n";
    leerMatriz(N, M, A);
    cout << "\nIngrese los elementos de la segunda matriz (" << M << "x" << N << "):\n";
    leerMatriz(M, N, B);
    multiplicarMatrices(A, B, C, N, M);
    cout << "\nResultado de la multiplicación (" << N << "x" << N << "):\n";
    mostrarMatriz(N, N, C);
    return 0;
}
