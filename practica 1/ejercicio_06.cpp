// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 6
#include<iostream>
using namespace std;
int main()
{
	int numero=0;
	cout<<"Ingrese un numero: "<<endl;
	cin>>numero;
	if(numero==0){
		cout<<"El numero es igual a 0"<<endl;
	}
	  else if (numero < 0){
	  	cout<<"El numero es negativo"<<endl;
	  }
	          else{
	         	     cout<<"El numero es positivo";
		    }
	return 0;	    
}

