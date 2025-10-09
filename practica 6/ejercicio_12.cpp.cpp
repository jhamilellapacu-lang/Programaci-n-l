// Materia: Programación I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 29/10/2024
// Número de ejercicio: 12
/*Problema planteado: Escribe una función que reciba un texto y retorne verdadero o falso (Boolean) según
sean o no palíndromos.*/
#include <iostream>
#include <string>
using namespace std;
bool esPalindromo(string texto) {
    string limpio = "";
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        if (c != ' ') {
            if (c >= 'A' && c <= 'Z') {
                c = c + ('a' - 'A'); 
            }
            limpio += c;
        }
    }
    int inicio = 0;
    int fin = limpio.length() - 1;
    while (inicio < fin) {
        if (limpio[inicio] != limpio[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}
int main() {
    string entrada;
    cout << "Ingrese un texto: ";
    getline(cin, entrada);
    if (esPalindromo(entrada)) {
        cout << "Es un palindromo" << endl;
    } else {
        cout << "No es un palindromo" << endl;
    }
    return 0;
}
