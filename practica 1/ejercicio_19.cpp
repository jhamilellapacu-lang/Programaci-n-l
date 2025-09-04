// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio: 19

#include<iostream>
using namespace std;
int main()
{
	int numero=0;
	cout<<"Ingrese un numero: "<<endl;
	cin>>numero;
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	return 0;
}
