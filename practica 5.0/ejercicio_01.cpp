// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 25/08/2025
// Número de ejercicio: 1
vector<float> generarVoltajes(int cantidad) {
    vector<float> voltajes;
    float v;
    for (int i = 0; i < cantidad; ++i) {
        v = 20 + (rand() % 20001) / 100.0; 
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

