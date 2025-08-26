// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 13
#include<iostream>
using namespace std;
int main()
{
	int numero=0, suma=0;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	for(int i=1; i<=numero; i++){
		suma+=i;
		
	}
	cout<<"La suma es: "<<suma;
	return 0;
	
}

