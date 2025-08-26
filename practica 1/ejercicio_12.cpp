/* Pedir al usuario un número entre 1 y 5.
Repetir la solicitud hasta que ingrese un valor válido.*/
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
	
	
	

