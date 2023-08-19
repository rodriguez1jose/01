// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 24

// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros d�gitos

#include <iostream>
using namespace std;

int main() {
    int numero, primerDigito, segundoDigito, suma;
    cout <<"Ingrese un numero entero: ";
    cin >> numero;

    // Extrae los dos primeros d�gitos del numero
    primerDigito = numero / 10;
    segundoDigito = numero % 10;

    // Calcula la suma de los dos primeros digitos
    suma = primerDigito + segundoDigito;
    cout << "La suma de los dos primeros digitos es: " << suma << endl;
    return 0;
}

