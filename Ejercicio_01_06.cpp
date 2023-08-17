// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 6

// Problema planteado: Numero primo

#include <iostream>
using namespace std;
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // Los n�meros menores o iguales a 1 no son primos
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false; // Si es divisible por alg�n n�mero entre 2 y la ra�z cuadrada de 'numero', no es primo
        }
    }
    return true; // Si no es divisible por ning�n n�mero entre 2 y la ra�z cuadrada de 'numero', es primo
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
	cin >> numero;

    // Verificar si el n�mero es primo
    if (esPrimo(numero)) {
	cout <<numero <<" es un numero primo." <<endl;
    } else {
        cout <<numero <<" no es un numero primo." <<endl;
    }
    return 0;
}

