// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 32

// Problema planteado: Leer un n�mero entero y mostrarlo con las cifras al rev�s

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

