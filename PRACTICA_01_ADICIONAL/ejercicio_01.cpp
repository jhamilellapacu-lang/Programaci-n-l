/*Leer las calificaciones de un estudiante en cinco materias y determinar 
si está en la lista de honor, considerando que debe tener un promedio de al
menos 85 y no haber obtenido menos de 80 en ninguna materia.*/
// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 1093560
// Carrera del estudiante: Ing. Sistemas
// Fecha creación: 03/10/2025
#include<iostream>
using namespace std;
int main(){
	float calificacion1=0.0, calificacion2=0.0, calificacion3=0.0, calificacion4=0.0, calificacion5=0.0;
	float promedio=0.0;
	cout<<"Ingrese la primera calificacion: "<<endl;
	cin>>calificacion1;
	cout<<"Ingrese la segunda calificacion: "<<endl;
	cin>>calificacion2;
	cout<<"Ingrese la tercera calificacion: "<<endl;
	cin>>calificacion3;
	cout<<"Ingrese la cuarta calificacion: "<<endl;
	cin>>calificacion4;
	cout<<"Ingrese la quinta calificacion: "<<endl;
	cin>>calificacion5;
	if(calificacion1>=80&&calificacion2>=80&&calificacion3>=80&&calificacion4>=80&&calificacion5>=80){
		promedio=(calificacion1+calificacion2+calificacion3+calificacion4+calificacion5)/5.0;
		cout<<"Promedio: "<<promedio<<endl;
		
		if(promedio>=85){
			cout<<"El alumno esta en la lista de honor";
		}
		else{
			cout<<"El alumno no esta en la lista de honor";
		}
	}
	else{
		cout<<"El alumno no esta en la lista de honor";
	}
	return 0;
}
