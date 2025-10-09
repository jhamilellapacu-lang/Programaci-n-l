// Materia: Programación I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 29/10/2024
// Número de ejercicio: 13
/*Problema planteado:Crea una función que reciba un String de cualquier tipo y se encargue de poner en
mayúscula la primera letra de cada palabra.*/
#include <iostream>
#include <string>
using namespace std;
string capitalizar(string texto) {
    string resultado = "";
    bool nueva_palabra = true;

    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        if (nueva_palabra && c >= 'a' && c <= 'z') {
            c = c - ('a' - 'A'); 
            nueva_palabra = false;
        } else if (c == ' ') {
            nueva_palabra = true;
        } else {
            nueva_palabra = false;
        }
        resultado += c;
    }
    return resultado;
}
int main() {
    string entrada;
    cout << "Ingrese una cadena: ";
    getline(cin, entrada);
    string salida = capitalizar(entrada);
    cout << "Resultado: " << salida << endl;

    return 0;
}
