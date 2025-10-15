// Materia: Programacion 1, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 15/10/25
// Numero de Ejercicio: 4
//Generar la matriz para un orden nxn
#include <iostream>
using namespace std;
void generarMatriz(int n, int matriz[100][100])
{
	int valor = 1;
	for (int i = 0; i < n; i++)
	{
		valor = 1 + (i * 2);
		for (int j = 0; j < n; j++)
		{
			matriz[i][j] = valor + j;
		}
	}
}
void mostrarMatriz(int n, int matriz[100][100])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	int n;
	int matriz[100][100];
	cout << "Ingrese el tamaC1o n de la matriz: ";
	cin >> n;
	generarMatriz(n, matriz);
	mostrarMatriz(n, matriz);
}

