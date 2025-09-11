// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creación: 10/09/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

double calcularTarifa(double kmRecorridos) {
    double tarifaBase = 10.0, precioPorKm = 2.0, total=0.0;
    
    total = tarifaBase + (kmRecorridos * precioPorKm);
    if (kmRecorridos > 10) {
        total = total - (total * 0.10); 
     }
     return total;
}
int main() {
    double kilometros=0.0, tarifa=0.0;
    cout << "Ingrese la distancia recorrida en km: "<<endl;
    cin >> kilometros;
    tarifa = calcularTarifa(kilometros);
    cout << "El precio del viaje es: " << tarifa << " Bs"<<endl;

    return 0;
}
