/*Crea un programa para calcular el promedio de notas, escriba un programa que
lea N notas y saque le promedio general.*/
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
	

