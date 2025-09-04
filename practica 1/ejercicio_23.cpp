// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio: 23

#include<iostream>
using namespace std;
int main()
{
	int numero=0, invertido=0, digito=0;
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	while(numero>0){
		digito=numero%10;
		invertido=invertido*10+digito;
		numero=numero/10;
	}
	cout<<"El numero ya invertido es: "<<invertido;
	return 0;
}
