// Materia: Programaci�n I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 03/09/2025
// N�mero de ejercicio: 20
//Crea un programa para calcular la cantidad de d�gitos que tiene un n�mero entero
#include<iostream>
using namespace std;
int main(){
	int numero=0, cantidad=0;
	cout<<"Ingrese un numero: "<<endl;
	cin>>numero;
	if(numero==0){
		cantidad=1;
	}
	else{
		while(numero!=0){
			numero=numero/10;
			cantidad++;
		}
	}
	cout<<"La cantidad de digitos es: "<<cantidad;
	return 0;
}
