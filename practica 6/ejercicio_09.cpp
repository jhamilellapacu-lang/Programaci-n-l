// Materia: Programación I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 29/10/2024
// Número de ejercicio: 9
/*Problema planteado: Escribe un programa que invierta el orden de las palabras en una 
oración sin cambiar el orden de los caracteres dentro de cada palabra.
• // Entrada: "Hola mundo desde C++"
• // Salida: "C++ desde mundo Hola"*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string oracion;
    cout << "Ingrese una oracion: ";
    getline(cin, oracion); 
    vector<string> palabras;
    string palabra = "";
    for (int i = 0; i < oracion.length(); i++) {
        if (oracion[i] != ' ') {
            palabra += oracion[i];
        } else {
            if (palabra != "") {
                palabras.push_back(palabra);
                palabra = "";
            }
        }
    }
    if (palabra != "") {
        palabras.push_back(palabra);
    }
    cout << "Oracion invertida: ";
    for (int i = palabras.size() - 1; i >= 0; i--) {
        cout << palabras[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
    return 0;
}
