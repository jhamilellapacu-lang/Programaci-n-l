// Materia: Programación I, Paralelo 1
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 29/10/2024
// Número de ejercicio: 5
/*Problema planteado: Intersección de dos listas de clientes: dos empresas tienen listas de clientes y quieren
saber cuántos clientes tienen en común. Escribe un programa que compare dos vectores
de nombres y muestre los clientes repetidos.*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> listaA = {"Juan", "Mario", "Pedro", "Ana", "Luis"};
    vector<string> listaB = {"Ana", "Carlos", "Pedro", "Sofía", "Luis"};
    vector<string> comunes;
    for (int i = 0; i < listaA.size(); i++) {
        for (int j = 0; j < listaB.size(); j++) {
            if (listaA[i] == listaB[j]) {
                int contador = 0;
                for (int k = 0; k < comunes.size(); k++) {
                    if (comunes[k] == listaA[i]) {
                        contador++;
                    }
                }
                if (contador == 0) {
                    comunes.push_back(listaA[i]);
                }
            }
        }
    }
    cout << "Clientes en comun: ";
    for (int i = 0; i < comunes.size(); i++) {
        cout << comunes[i];
        if (i < comunes.size() - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
