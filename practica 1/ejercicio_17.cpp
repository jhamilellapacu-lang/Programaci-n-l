// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio: 17

#include<iostream>
using namespace std;
int main()
{
	int numero1=0, numero2=0, suma1=0, suma2=0;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>numero1;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>numero2;
	for(int i=1; i<numero1; i++){
		if(numero1%i==0){
			suma1+=i;
			
		}
		
	}
	for(int j=1; j<numero2; j++){
		if(numero2%j==0){
			suma2+=j;
		}
	}
	if(suma1==numero2 && suma2==numero1){
		cout<<"Son amigos";
	}
	else{
		cout<<"No son amigos";
	}
	return 0;
}

