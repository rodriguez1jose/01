// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 32

// Problema planteado: Leer un número entero y mostrarlo con las cifras al revés

#include <iostream>
using namespace std;

int main() {
    int numero, numeroReverso = 0;
    cout <<"Ingrese un numero entero: ";
    cin>> numero;
    // Ciclo para invertir las cifras del numero
    while (numero != 0) {
        int digito = numero % 10; // Extraeel ultimo digito del numero
        numeroReverso = numeroReverso * 10 + digito; // Construye el numero al reves
        numero /= 10;
    }
    cout <<"El numero con las cifras al reves es: " <<numeroReverso <<endl;
    return 0;
}

