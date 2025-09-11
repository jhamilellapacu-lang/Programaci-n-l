// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creación: 10/09/2025
// Número de ejercicio: 2

#include<iostream>
using namespace std;
float celsius_fahrenheit(float celsius){
	return(celsius*1.8)+32;
}
int main(){
	float numero=0, fahrenheit=0;
	cout<<"Ingrese la temperatura en celsius: "<<endl;
	cin>> numero;
	fahrenheit=celsius_fahrenheit(numero);
	cout<<"La temperatura en fahrenheit es: "<<fahrenheit;
}
