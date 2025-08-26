// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 21

#include<iostream>
using namespace std;
int main()
{
    int numero_1=0, numero_2=0, resultado=0;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero_1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero_2;
    for(int i=1; i<=numero_2; i++){
    	resultado+= numero_1;
    }
    cout<<"El resultado de la multiplicacion "<<numero_1<<" * "<<numero_2<<" es: "<<resultado;
    return 0;
}


