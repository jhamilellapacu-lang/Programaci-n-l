/*Pedir la nota de un estudiante (0�100).
� Si la nota es = 51, mostrar:
o Si est� aprobado y la nota es menor a 60, mostrar Calificaci�n = C
o Si est� aprobado y la nota es menor a 70, mostrar Calificaci�n = C+
o Si est� aprobado y la nota es menor a 80, mostrar Calificaci�n = B
o Si est� aprobado y la nota es menor a 90, mostrar Calificaci�n = B+
o Si est� aprobado y la nota es menor a 95, mostrar Calificaci�n = A
o Si est� aprobado y la nota es igual a 100, mostrar Calificaci�n = A+
� En caso contrario, mostrar �Reprobado�.*/
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

