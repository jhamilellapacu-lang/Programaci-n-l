// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 10
#include<iostream>
using namespace std;
int main()
{
	int nota=0;
	cout<<"Ingrese la nota de 0 a 100: ";
	cin>>nota;
	if(nota>=51){
		if(nota<60){
			cout<<"C";
		}
		  else if(nota<70){
		  	cout<<"C+";
		  }
		         else if(nota<80){
		         	 cout<<"B";
			    }
			        else if(nota<90){
			        	 cout<<"B+";
				   }
				      else if(nota<95){
				      	cout<<"A";
					 }
					    else if(nota<=100){
					    	     cout<<"A+";
					    }
     }
	else{
		cout<<"Reprobado";
	}
					    
	
     return 0;	
}


