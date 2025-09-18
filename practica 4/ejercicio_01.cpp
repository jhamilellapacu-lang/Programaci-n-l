// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 17/09/2025
// Número de ejercicio: 1
#include<iostream>
using namespace std;
void intercambiar_valores(int &a, int &b){
    int auxiliar=a;
    a=b;
    b=auxiliar;
    
}

int main(){
    int x=0, y=0;
    
    cout<<"Ingrese el primer valor: ";
    cin>>x;
    cout<<"Ingrese el segundo valor: ";
    cin>>y;
    cout<<"Valores antes de intercambiar x= "<<x<< " y= "<<y<<endl;
    intercambiar_valores(x,y);
    cout<<"Valores depued de intercambiar x="<<x<< " y= "<<y<<endl;
    return 0;
    
    
}
