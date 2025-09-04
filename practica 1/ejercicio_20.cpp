// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio: 20
//Crea un programa para calcular la cantidad de dígitos que tiene un número entero
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
