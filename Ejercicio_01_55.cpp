// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 55

// Problema planteado:Generar las secuencias:
//1 2 3 4 …………..n
//1 2 3 4….. n-1
//1 2 3 …...n-2
//……..
//1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese el valor de n: ";
    cin>> n;

    // Genera las secuencias
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

