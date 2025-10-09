// Materia: Programación I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 29/10/2024
// Número de ejercicio: 10
/*Problema planteado: Escribe un programa que elimine todos los dígitos de una cadena.
// Entrada: "abc123def456"
// Salida: "abcdef"*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string entrada;
    cout << "Ingrese una cadena: ";
    cin >> entrada;
    string resultado = "";
    for (int i = 0; i < entrada.length(); i++) {
        if (!(entrada[i] >= '0' && entrada[i] <= '9')) {
            resultado += entrada[i];
        }
    }

    cout << "Cadena sin digitos: " << resultado << endl;

    return 0;
}
