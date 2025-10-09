// Materia: Programación I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 29/10/2024
// Número de ejercicio: 11
/*Problema planteado: Escribe un programa que divida una cadena en tokens (subcadenas) separadas por un
delimitador. Por ejemplo, dividir una oración en palabras.
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','
// Salida:
// Esto
// es
// una
// cadena
// separada
// por
// comas*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string cadena;
    char delimitador;
    cout << "Ingrese la cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el delimitador: ";
    cin >> delimitador;
    string token = "";
    cout << "\nTokens separados por '" << delimitador << "':" << endl;
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] != delimitador) {
            token += cadena[i];
        } else {
            if (token != "") {
                cout << token << endl;
                token = "";
            }
        }
    }
    if (token != "") {
        cout << token << endl;
    }
    return 0;
}
