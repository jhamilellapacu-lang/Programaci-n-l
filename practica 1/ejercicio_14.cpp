/*Solicitar un número N y mostrar en pantalla un triángulo de asteriscos de altura N.
Ejemplo con N=4:
*
**
***
*****/
#include<iostream>
using namespace std;
int main()
{
	int numero=0;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	for(int i=1; i<=numero; i++){
		for(int f=1; f<=i; f++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
