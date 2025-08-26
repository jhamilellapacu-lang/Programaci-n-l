/*Realice un programa que detecte si una letra ingresada el vocal o consonante. Si
no es ninguna letra que diga que es carácter especial.*/
#include <iostream>
using namespace std;

int main() {
    char letra='';
    cout << "Ingrese un caracter: ";
    cin >> letra;

    // Verificamos si es una letra manualmente o no
    bool esLetra = (letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z');

    if (esLetra) {
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
            letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            cout << "Es una vocal." << endl;
        } else {
            cout << "Es una consonante." << endl;
        }
    } else {
        cout << "Es un caracter especial." << endl;
    }

    return 0;
}
