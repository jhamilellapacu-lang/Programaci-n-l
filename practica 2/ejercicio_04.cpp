// Materia: Programación I, Paralelo 4
// Autor: Jhamile LLapacu Cruz
// Carnet: 10935560 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 08/09/2025
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    

    int secreto =0,intento =0, minimo =0, maximo =50;
    srand(time(0)); 
    secreto= rand() % 51; 
    cout << "Estoy pensando un numero entre 0 y 50"<<endl;

    for (int i = 1; i <= 5; ++i) {
        cout << "Intento " << i << "? "<<endl;
        cin >> intento;

        if (intento == secreto) {
            cout << "Felicitaciones… Adivinaste el numero"<<endl;
        }
        else{
        	if (intento < secreto && intento > minimo){
        		minimo = intento;
		   }
            
          else if (intento > secreto && intento < maximo){
          	maximo = intento;
		}
            

          cout << "El numero esta entre " << minimo<< " y " << maximo<<endl;
        	
	   }


        if (i == 5 && intento != secreto)
            cout << "Fallaste. El numero era " << secreto;
    }

    return 0;
}

