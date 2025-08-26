/*Pedir al usuario un número N y calcular la suma de todos los enteros desde 1
hasta N.*/
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
