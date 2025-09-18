// Materia: Programación I, Paralelo 4
// Autor: Jhamile Llapacu Cruz
// Fecha creación: 17/09/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;

float calcularSalarioBase(float horas, float tarifa) {
    if (horas <= 8)
        return horas * tarifa;
    else
        return 8 * tarifa;
}

float calcularBonificacion(float horas, float tarifa) {
    if (horas > 8)
        return (horas - 8) * tarifa * 0.3; 
    else
        return 0.0;
}

int main() {
    float horasTrabajadas= 0.0, tarifaHora= 0.0, salarioBase= 0.0,bonificacion=0, salarioTotal=0.0;
    cout << "Ingrese las horas trabajadas: "<<endl;
    cin >> horasTrabajadas;
    cout << "Ingrese la tarifa por hora: "<<endl;
    cin >> tarifaHora;

    salarioBase = calcularSalarioBase(horasTrabajadas, tarifaHora);
    bonificacion = calcularBonificacion(horasTrabajadas, tarifaHora);
    salarioTotal = salarioBase + bonificacion;

    cout << "Resultado: "<<endl;
    cout << "Salario base: " << salarioBase << " Bs"<<endl;
    cout << "Bonificación por horas extra: " << bonificacion << " Bs"<<endl;
    cout << "Salario total: " << salarioTotal << " Bs"<<endl;

    return 0;
}
