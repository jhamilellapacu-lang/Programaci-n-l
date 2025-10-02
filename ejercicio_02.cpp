// Materia: Programación I, Paralelo 4
// Autor: Jhamile LLapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 08/09/2025
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

vector<float> generarVoltajes(int cantidad) {
    vector<float> voltajes;
    float v;
    for (int i = 0; i < cantidad; ++i) {
        v = 20 + (rand() % 20001) / 100.0;  // 100.0 en lugar de 100.0f
        voltajes.push_back(v);
    }
    return voltajes;
}

vector<float> generarTemperaturas(int cantidad) {
    vector<float> temperaturas;
    float t;
    for (int i = 0; i < cantidad; ++i) {
        t = (rand() % 10001) / 100.0;
        temperaturas.push_back(t);
    }
    return temperaturas;
}

vector<char> generarCaracteres(int cantidad) {
    vector<char> caracteres;
    char c;
    string alfanumericos = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < cantidad; ++i) {
        c = alfanumericos[rand() % alfanumericos.size()];
        caracteres.push_back(c);
    }
    return caracteres;
}

vector<int> generarAnios(int cantidad) {
    vector<int> anios;
    int anio;
    for (int i = 0; i < cantidad; ++i) {
        anio = 1990 + rand() % (2026 - 1990);
        anios.push_back(anio);
    }
    return anios;
}

vector<float> generarVelocidades(int cantidad) {
    vector<float> velocidades;
    float v;
    for (int i = 0; i < cantidad; ++i) {
        v = 10 + (rand() % 29001) / 100.0;
        velocidades.push_back(v);
    }
    return velocidades;
}

vector<float> generarDistancias(int cantidad) {
    vector<float> distancias;
    float d;
    for (int i = 0; i < cantidad; ++i) {
        d = 1 + (rand() % 100000) / 100.0;
        distancias.push_back(d);
    }
    return distancias;
}

int main() {
    vector<float> voltajes, temperaturas, velocidades, distancias;
    vector<char> caracteres;
    vector<int> anios;
    int cantidadVoltajes = 100, cantidadTemperaturas = 50, cantidadCaracteres = 30;
    int cantidadAnios = 100, cantidadVelocidades = 32, cantidadDistancias = 1000;

    srand(time(0));

    voltajes = generarVoltajes(cantidadVoltajes);
    temperaturas = generarTemperaturas(cantidadTemperaturas);
    caracteres = generarCaracteres(cantidadCaracteres);
    anios = generarAnios(cantidadAnios);
    velocidades = generarVelocidades(cantidadVelocidades);
    distancias = generarDistancias(cantidadDistancias);

    cout << "Primeros 5 voltajes:" << endl;
    for (int i = 0; i < 5; ++i) cout << voltajes[i] << " V" << endl;

    cout << "Primeros 5 temperaturas:" << endl;
    for (int i = 0; i < 5; ++i) cout << temperaturas[i] << " °C" << endl;

    cout << "Primeros 5 caracteres:" << endl;
    for (int i = 0; i < 5; ++i) cout << caracteres[i] << " ";
    cout << endl;

    cout << "Primeros 5 años:" << endl;
    for (int i = 0; i < 5; ++i) cout << anios[i] << endl;

    cout << "Primeros 5 velocidades:" << endl;
    for (int i = 0; i < 5; ++i) cout << velocidades[i] << " km/h" << endl;

    cout << "Primeros 5 distancias:" << endl;
    for (int i = 0; i < 5; ++i) cout << distancias[i] << " m" << endl;

    return 0;
}
