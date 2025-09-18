// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 17/09/2025
// Número de ejercicio: 4
#include<iostream>
using namespace std;
int convertirCelsiusFahrenheit(float celsius ){
	return (1.8*celsius)+ 32;
}

int main()
{
	float celsius=0.0, fahrenheit=0.0;
	cout<<"Ingrese un valor: "<<endl;
	cin>>celsius;
	fahrenheit= convertirCelsiusFahrenheit(celsius);
	cout<<"La conversion de celsius a fahrenheit es: "<<fahrenheit;
	return 0;
}
