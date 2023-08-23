// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 57

// Problema planteado:  Encontrar cuadrados perfectos en el rango 1 a n

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese el valor de n: ";
    cin>> n;
    cout <<"Cuadrados perfectos en el rango del 1 al " <<n <<":" <<endl;
	// `ciclo desde 1 hasta que el cuadrado de i sea menor o igual a n
    for (int i = 1; i * i <= n; ++i) {
        cout << i * i << " ";
    }
    cout <<endl;
    return 0;
}

