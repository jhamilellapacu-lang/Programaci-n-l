// Materia: Programaci�n I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creaci�n: 10/09/2025
// N�mero de ejercicio: 1

#include<iostream>
using namespace std;
void par_impar(int numero){
	if(numero%2==0){
		cout<<"Es par";
	}
	else{
		cout<<"Es impar";
	}
	
}

int main()
{
	int valor=0;
	cout<<"Ingrese un valor: ";
	cin>>valor;
	par_impar(valor);

}
