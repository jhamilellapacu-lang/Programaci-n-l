#include<iostream>
using namespace std;
int main()
{
    float volumen = 0, radio = 0;
    float PI= 3.14159;
    cout<<"Ingrese el radio de la esfera: "<<endl;
    cin>>radio;
    volumen= (4.0/3)*PI*(radio*radio*radio);
    cout<<"El volumen es: "<<volumen;
    return 0;
}
