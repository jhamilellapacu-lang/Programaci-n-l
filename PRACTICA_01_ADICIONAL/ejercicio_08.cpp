// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 1093560
// Carrera del estudiante: Ing. Sistemas
// Fecha creación: 03/10/2025
#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;
int esPrimo(int numero) {
    int i, contador = 0;
    if (numero < 2) {
        return 0; 
    }
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }

    if (contador == 2) {
        return 1; 
    } else {
        return 0; 
    }
}
void AnalizarNumeros(int N) {
    srand(time(0)); 
    int numero=0;
    float suma = 0.0, promedio=0.0;
    cout << "Numeros generados: "<<endl;
    for (int i = 0; i < N; i++) {
        numero = rand() % 1000 + 1; 
        suma += numero;
        cout << numero;
        if (esPrimo(numero) == 1) {
            cout << " *"; 
        }
        cout << endl;
    }
    promedio = suma / N;
    cout << "Sumatoria total: " <<suma<< endl;
    cout << "Promedio: " <<promedio<< endl;
}
int main() {
    int cantidad;
    cout << "Ingrese cuantos numeros desea generar: ";
    cin >> cantidad;

    if (cantidad > 0) {
        AnalizarNumeros(cantidad);
    } else {
        cout << "Debe ingresar un numero positivo"<<endl;
    }

    return 0;
}
