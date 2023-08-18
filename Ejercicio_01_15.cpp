// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 17/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 15

// Problema planteado: Escriba la sucesi�n de Fibonacci.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de terminos para la sucesion de Fibonacci: ";
    cin >> n;

    int a = 0, b = 1;
    cout <<"Sucesion de Fibonacci:" <<endl;
    for (int i = 0; i < n; ++i) {
        cout <<a <<" ";
        int temp = a;
        a = b;
        b = temp + b;
    }
    return 0;
}

