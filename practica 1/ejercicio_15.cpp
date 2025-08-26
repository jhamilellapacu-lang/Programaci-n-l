// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 15
#include<iostream>
using namespace std;
int main()
{
	float promedio=0, nota=0, suma=0;
	int cantidad;
	cout<<"Ingrese la cantidad de notas que desee: ";
	cin>>cantidad;
	for(int i=1; i<=cantidad; i++){
		cout<<"Ingrese las nota "<<i<<":"<<endl;
		cin>>nota;
		suma+=nota;
	}
	promedio=suma/cantidad;
	cout<<"El promedio es: "<<promedio;
	return 0;
		
	
}
	


