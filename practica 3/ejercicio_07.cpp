// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz.
// Fecha creación: 10/09/2025
// Número de ejercicio: 7
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarEdad() {
    return rand() % 35 + 1;
}

int generarAltura() {
    return rand() % 81 + 120;
}

void analizarAlumnos(int numero) {
    int edad=0, altura=0, sumaEdades = 0, sumaAlturas = 0, mayores18 = 0, mas175 = 0;
    float edadMedia=0.0, alturaMedia=0.0;
    for (int i = 1; i <= numero; i++) {
        edad = generarEdad();
        altura = generarAltura();
        cout << "Alumno " << i << ": Edad = " << edad << ", Altura = " << altura << endl;
        sumaEdades += edad;
        sumaAlturas += altura;

        if (edad > 18) {
            mayores18 ++;
        }

        if (altura > 175) {
            mas175 ++;
        }
    }

    edadMedia = (float)sumaEdades / numero;
    alturaMedia = (float)sumaAlturas / numero;

    cout << "Edad media: " << edadMedia << " annos"<<endl;
    cout << "Altura media: " << alturaMedia << " cm"<<endl;
    cout << "Alumnos mayores de 18 annos: " << mayores18 << endl;
    cout << "Alumnos que miden mas de 175 cm: " << mas175 <<endl;
}


int main() {
    int numero;

    srand(time(0)); 

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> numero;

    analizarAlumnos(numero);

    return 0;
}

