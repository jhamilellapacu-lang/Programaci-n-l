/*Leer un número entero y mostrar en pantalla si es positivo, negativo o cero*/
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
