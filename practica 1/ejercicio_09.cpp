/*Solicitar la edad de un usuario y determinar si:
a. Niño (edad <= 12)
b. Adolescente (edad <= 18)
c. Mayor de edad (edad > 18 y edad < 60)
d. Adulto mayor (edad >= 60)*/
#include<iostream>
using namespace std;
int main()
{
	int edad= 0;
	cout<<"Ingrese su edad: ";
	cin>>edad;
	if(edad <= 12){
		cout<<"Es ninno";
			}
		else if(edad > 12 && edad <= 18){
			cout<<"Es adolescente";
	}      
	             else if(edad > 18 && edad < 60){
	             	cout<<"Es mayor de edad";
			   }
			           else if(edad >= 60 && edad < 120 ){
			           	cout<<"Es adulto mayor";
					 }
					     else {
					          cout<<"Error";
						}
					         
	return 0;		           
}
