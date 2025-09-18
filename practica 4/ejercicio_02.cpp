// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 17/09/2025
// Número de ejercicio: 2
#include<iostream>
#include<cmath>
using namespace std;


float calcular_volumen(float radio=0, float altura=10.0){
    float const PI=3.1416;
    return PI*pow(radio,2)*altura;
    
}
int main(){
    float radio=0.0, altura=10.0, volumen=0.0;
    cout<<"Ingrese el radio: "<<endl;
    cin>>radio;
    volumen=calcular_volumen(radio,altura);
    cout<<"El volumen es: "<<volumen;
    
}
