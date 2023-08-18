// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 17/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 13

// Problema planteado: Indique la cantidad de d�gitos que tiene un n�mero entero

#include <iostream>
#include <cmath> // Necesario para usar log10()

using namespace std;
int main() {
    int numero;
    cout <<"Ingrese un numero entero: ";
    cin>> numero;
    int cantidadDigitos = int(log10(numero)) + 1;
	cout <<"El numero " <<numero <<" tiene " <<cantidadDigitos <<" digitos." <<endl;
    return 0;
}

