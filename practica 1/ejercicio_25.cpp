// Materia: Programaci�n I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 03/09/2025
// N�mero de ejercicio: 25

#include<iostream>
using namespace std;
int main(){
	int numero=0;
	char continuar=' ';
	do{
		cout<<"Ingrese un numero: "<<endl;
		cin>>numero;
		for(int i=1; i<=10; i++){
			cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
		}
		cout<<endl;
		cout<<"�Desea calcular otra tabla? (s/n)"<<endl;
		cin>>continuar;
	}while(continuar=='s');
	
	return 0;
}
