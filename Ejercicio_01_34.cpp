// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 34

// Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de terminos: ";
    cin >> n;

    int termino = 1;
    int aumento = 0;
    for (int i = 1; i <= n; ++i) {
        cout << termino << " ";
        // Calcula el aumento segun la posicion del termino
        aumento = i - 1;
        termino = termino + aumento;
    }
    cout << endl;
    return 0;
}


