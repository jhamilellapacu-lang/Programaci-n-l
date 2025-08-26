//Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 26/08/2025
// Número de ejercicio: 22
#include<iostream>
using namespace std;
int main()
{
    int numero_1=0, numero_2=0;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero_1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero_2;
    if(numero_1%numero_2==0){
        cout<<"Son multiplos. "<<numero_1<<" es multiplo de "<<numero_2<<endl;
    }
       else if(numero_2%numero_1==0){
           cout<<"Son multiplos. "<<numero_2<<" es multiplo de "<<numero_1<<endl;
       }
           
            else{
                cout<<"No son multiplos";
         
            }
return 0;
}
