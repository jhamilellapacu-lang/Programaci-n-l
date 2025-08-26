// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 12
#include<iostream>
using namespace std;
int main()
{
	int numero=0;
	do{
		cout<<"Ingrese un numero entre 1 y 5: ";
	     cin>>numero;
	     if(numero<1 || numero >5){
		   cout<<"Error. Intente de nuevo."<<endl;
      	}
      }while(numero<1 || numero>5);
      	cout<<"Numero correcto";
	 return 0;	
}
	
	
	


