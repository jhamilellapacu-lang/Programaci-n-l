// Materia: Programaci�n I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 03/09/2025
// N�mero de ejercicio: 16

#include<iostream>
using namespace std;
int main()
{
	int numero=0, cantidad=0;
	cout<<"Ingrese un numero: "<<endl;
	cin>>numero;
	for(int i=1; i<=numero; i++ )
	 {
	    if(numero%i==0)
	{
		cantidad++;
     }
		
	}	
	if(cantidad==2)
	{
		cout<<"Es primo";
	}
	
	else {
		cout<<"No es primo";
	}
	return 0;
}
