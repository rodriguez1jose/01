// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 15

// Problema planteado: Escriba la sucesión de Fibonacci.

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

