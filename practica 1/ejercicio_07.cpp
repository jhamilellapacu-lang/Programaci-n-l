// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

int main() {
    char letra='';
    cout << "Ingrese un caracter: ";
    cin >> letra;

    // Verificamos si es una letra manualmente o no
    bool esLetra = (letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z');

    if (esLetra) {
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            cout << "Es una vocal." << endl;
        } 
        else if{
            cout << "Es una consonante." << endl;
        }
    } 
        else {
            cout << "Es un caracter especial." << endl;
    }

    return 0;
}

