// Materia: Programaci�n I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creaci�n: 10/09/2025
// N�mero de ejercicio: 4
/*Realizar una funci�n para el c�lculo del IMC (�ndice de Masa Corporal): Leer el
peso en kilogramos y la altura en metros de una persona, luego calcular su IMC
usando la f�rmula.*/
#include<iostream>
using namespace std;
float calculo_imc(float peso, float altura){
	return peso/(altura*altura );
}
int main(){
	float peso=0, altura=0, imc=0;
	cout<<"Ingrese el peso en kilogramos: "<<endl;
	cin>>peso;
	cout<<"Ingrese la altura en metros: "<<endl;
	cin>>altura;
	imc= calculo_imc(peso, altura);
	cout<<"El IMC es: "<<imc;
	
}

