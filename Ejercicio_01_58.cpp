// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 58

// Problema planteado: Generar:
//121 
//12321 
//1234321 
//123454321 
//12345654321 
//1234567654321

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese el numero de filas: ";
    cin>> n;

    for (int i = 1; i <= n; ++i) {
        // Imprime los numeros ascendentes
        for (int j = 1; j <= i; ++j) {
            cout <<j;
        }
        // Imprime los numeros descendentes
        for (int j = i - 1; j >= 1; --j) {
            cout <<j;
        }
        cout <<endl;
    }
    return 0;
}

