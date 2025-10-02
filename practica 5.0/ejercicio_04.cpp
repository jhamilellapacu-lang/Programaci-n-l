#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la dimension de los vectores: ";
    cin >> N;

    vector<int> A(N), B(N), C(N);

   
    cout << "Ingrese los elementos del vector A: "<<endl;
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "Ingrese los elementos del vector B: "<<endl;
    for (int i = 0; i < N; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    for (int i = 0; i < N; i++) {
        C[i] = A[i] * B[i];
    }


    cout << "Multiplicacion: "<<endl;
    for (int i = 0; i < N; i++) {
        cout << A[i] << " * " << B[i] << " = " << C[i] << endl;
    }

    return 0;
}
