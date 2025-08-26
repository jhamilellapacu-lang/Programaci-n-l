// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 14
#include<iostream>
using namespace std;
int main()
{
	int numero=0;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	for(int i=1; i<=numero; i++){
		for(int f=1; f<=i; f++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

