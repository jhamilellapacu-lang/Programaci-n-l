// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 3
/*Crea un programa para calcular el área de un triángulo. El usuario debe ingresar la
base y altura. */
#include<iostream>
using namespace std;
int main()
{
    float area=0, base=0, altura=0;
    cout<<"Ingrese la base: "<<endl;
    cin>>base;
    cout<<"Ingrese la altura: "<<endl;
    cin>>altura;
    area= (base*altura)/2;
    cout<<"El area del triangulo es: "<<area;
    return 0;

}
