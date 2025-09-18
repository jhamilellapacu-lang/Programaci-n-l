// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 17/09/2025
// Número de ejercicio: 3
#include<iostream>
using namespace std;
void ModificarValores(int valor1, int &valor2 ){
    valor1*= 2;
    valor2+=10;
}

int main(){
    int modificado1=0, modificado2=0;
    cout<<"Ingrese el primer valor: "<<endl;
    cin>>modificado1;
    cout<<"Ingrese el segundo valor: "<<endl;
    cin>>modificado2;
    cout<<"Los valores antes de ser modificados: "<<endl;
    cout<<"modificado1= " <<modificado1<<"  modificado2= "<<modificado2<<endl;
    ModificarValores(modificado1,modificado2);
    cout<<"Los valores ya modificados: "<<endl;
    cout<<"modificado1= "<<modificado1<<"   modificado2= "<<modificado2;
    return 0;
    
    
}


