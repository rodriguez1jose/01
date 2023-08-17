// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 15/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 3

// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general.

#include <iostream>
using namespace std;
int main() {
    int N;
    double nota, suma = 0.0;
    cout << "Ingrese la cantidad de notas: ";
    cin >> N;

    // Lee y suma las notas
    for (int i = 1; i <= N; ++i) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }
    // Calcula el promedio
    double promedio = suma / N;
    cout <<"El promedio de las " <<N <<" notas es: " <<promedio <<endl;

    return 0;
}

