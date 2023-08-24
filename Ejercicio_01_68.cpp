// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 23/08/2023

// Fecha modificaci�n: 24/08/2023

// N�mero de ejericio: 68

// Problema planteado: Escribir un algoritmo que permita generar 50 n�meros al azar en el rango (1-99) y 
// determine cu�ntos de estos elementos son n�meros primos.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int NUM_ELEMENTOS = 50;
    int numerosPrimos = 0;
    for (int i = 0; i < NUM_ELEMENTOS; ++i) {
        int numeroAleatorio = rand() % 99 + 1; // Genera numero aleatorio entre 1 y 99
        // Verifica si la suma de los digitos distintos de cero es un numero primo
        int numeroTemporal = numeroAleatorio;
        int sumaDigitos = 0;
        while (numeroTemporal > 0) {
            int digito = numeroTemporal % 10;
            if (digito != 0) {
                sumaDigitos += digito;
            }
            numeroTemporal /= 10;
        }
        bool esPrimo = true;
        for (int j = 2; j * j <= sumaDigitos; ++j) {
            if (sumaDigitos % j == 0) {
                esPrimo = false;
                break;
            }
        }   
        if (esPrimo) {
            numerosPrimos++;
        }
    }
    cout <<"Se generaron " <<NUM_ELEMENTOS <<" numeros al azar." <<endl;
    cout <<"Cantidad de numeros con suma de digitos primos: " <<numerosPrimos <<endl;
    return 0;
}

