// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 24

// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros dígitos

#include <iostream>
using namespace std;

int main() {
    int numero, primerDigito, segundoDigito, suma;
    cout <<"Ingrese un numero entero: ";
    cin >> numero;

    // Extrae los dos primeros dígitos del numero
    primerDigito = numero / 10;
    segundoDigito = numero % 10;

    // Calcula la suma de los dos primeros digitos
    suma = primerDigito + segundoDigito;
    cout << "La suma de los dos primeros digitos es: " << suma << endl;
    return 0;
}

