// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 17/09/2025
// Número de ejercicio: 8
#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de productos vendidos: ";
    cin >> n;

    srand(time(0)); 

    float sumaBruta = 0.0;
    for (int i = 1; i <= n; ++i) {
        float precio = 20 + rand() % 31;
        cout << "Producto " << i << ": " << precio << " Bs" << endl;
        sumaBruta += precio;
    }

    float iva = sumaBruta * 0.13;
    float totalConIVA = sumaBruta + iva;
    float descuento = 0.0;

    if (totalConIVA > 2500)
        descuento = totalConIVA * 0.05;

    float totalFinal = totalConIVA - descuento;

    cout << "Resumen de ventas: "<<endl;
    cout << "Total bruto: " << sumaBruta << " Bs"<<endl;
    cout << "IVA (13%): " << iva << " Bs"<<endl;
    cout << "Descuento aplicado: " << descuento << " Bs"<<endl;
    cout << "Total final a pagar: " << totalFinal << " Bs"<<endl;

    return 0;
}
