// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 20

// Problema planteado: Leer tres n�meros enteros y si son diferentes entre s� determine con alg�n mensaje el menor

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout <<"Ingrese tres numeros enteros diferentes: ";
    cin>> a>> b>> c;
    int menor = a;
    // Encuentra el menor numero entre a, b y c
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
	cout <<"El menor numero es: " <<menor <<endl;
    return 0;
}

