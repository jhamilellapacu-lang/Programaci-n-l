// Materia: Programaci�n I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creaci�n: 29/10/2024
// N�mero de ejercicio: 8
/*Problema planteado: . Escribe un programa que valide si una cadena ingresada cumple con el formato b�sico
de una direcci�n de correo electr�nico (por ejemplo, contiene exactamente un '@' y al
menos un punto '.' despu�s del '@')*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string correo;
    cout << "Ingrese una direccion de correo electronico: ";
    cin >> correo;
    int arroba_pos = -1;
    int arroba_count = 0;
    for (int i = 0; i < correo.length(); i++) {
        if (correo[i] == '@') {
            arroba_pos = i;
            arroba_count++;
        }
    }
    if (arroba_count != 1) {
        cout << "Correo electronico invalido" << endl;
        return 0;
    }
    bool punto_despues = false;
    for (int i = arroba_pos + 1; i < correo.length(); i++) {
        if (correo[i] == '.') {
            punto_despues = true;
            break;
        }
    }
    if (punto_despues) {
        cout << "Correo electronico valido" << endl;
    } else {
        cout << "Correo electronico invalido" << endl;
    }
    return 0;
}
