/*Pedir un número entero y determinar si es par o impar*/
#include<iostream>
using namespace std;
int main()
{
	int numero;
	cout<<"Ingrese un numero: "<<endl;
	cin>>numero;
	if(numero%2==0){
		cout<<"Es par";
	}
		else{
			cout<<"Es impar";
		
		}
     return 0;	
}
