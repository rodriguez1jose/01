 // Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 37

// Problema planteado: Obtenga el factorial de un n�mero entero sin emplear el producto.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese un numero entero: ";
    cin>> n;

    int factorial = 1;  // Variable para almacenar el factorial iniciada en 1
    // Bucle para calcular el factorial del numero ingresado
    for (int i = 2; i <= n; ++i) {
        factorial = factorial + factorial * (i - 1);  // Calcula el siguiente termino del factorial
    }
    cout <<"El factorial de " <<n <<" es: " <<factorial <<endl;
    return 0;
}


