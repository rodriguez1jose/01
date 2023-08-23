// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 48

// Problema planteado: Dado un rango (A y B) de números enteros, obtener la cantidad de números pares que contiene dicho rango.

#include <iostream>
using namespace std;

int main() {
    int A, B;
    int countPares = 0;
    cout << "Ingrese el rango de numeros (A y B): ";
    cin>> A>> B;

    // Bucle para los numeros en el rango (A,B)
    for (int num = A; num <= B; ++num) {
        if (num % 2 == 0) {
            countPares++;  // Incrementa el contador si el numero es par
        }
    }
    cout <<"La cantidad de numeros pares en el rango [" << A << ", " << B << "] es: " <<countPares <<endl;
    return 0;
}


