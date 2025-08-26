/*Crea un programa para realizar la conversión de temperatura de grados centígrado
a Kelvin.*/
#include<iostream>
using namespace std;
int main()
{
	float centigrado=0, kelvin=0;
	cout<<"Ingrese el valor a convertir: "<<endl;
	cin>>centigrado;
	kelvin =centigrado + 273.15;
	cout<<"La conversion de centigrados a kelvin es: "<<kelvin;
	
}
