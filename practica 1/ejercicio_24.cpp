// Materia: Programaci�n I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 03/09/2025
// N�mero de ejercicio: 24

#include<iostream>
using namespace std;
int main()
{
	int opcion=0;
	do{
		cout<<"1. Opcion 1"<<endl;
		cout<<"2. Opcion 2"<<endl;
		cout<<"3. Opcion 3"<<endl;
		cout<<"0. Salir"<<endl;
		cin>>opcion;
		if(opcion==1){
			cout<<"Ha seleccionado la opcion 1"<<endl;
		}
		else if(opcion==2){
			cout<<"Ha seleccionado la opcion 2"<<endl;
		}
		else if(opcion==3){
			cout<<"Ha seleccionado la opcion 3"<<endl;
		}
		else if(opcion==0){
			cout<<"Ha salido del sistema"<<endl;
		}
		else{
			cout<<"Opcion invalida"<<endl;
		}
	}while(opcion!=0);
	return 0;
}


