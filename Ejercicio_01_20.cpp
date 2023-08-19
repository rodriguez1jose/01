// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 20

// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el menor

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

