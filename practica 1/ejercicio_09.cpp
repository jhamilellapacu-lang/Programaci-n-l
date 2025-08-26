// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 9
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

