// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 23/08/2023

// Fecha modificaci�n: 24/08/2023

// N�mero de ejericio: 67

// Problema planteado: Leer un n�mero entero y determinar si la suma de sus d�gitos distintos de cero forman 
// un n�mero primo, de ser as� imprima el mensaje respectivo.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero;
    cout <<"Ingrese un numero entero: ";
    cin>> numero;

    int sumaDigitos = 0;
    int num = numero;
	// Calcula la suma de los digitos distintos de cero del numero
    while (num > 0) {
        int digito = num % 10;
        if (digito != 0) {
            sumaDigitos += digito;
        }
        num /= 10;
    }
    bool esNumeroPrimo = true;
    if (sumaDigitos <= 1) {
        esNumeroPrimo = false;
    } else {
    	// Verifica si la suma de los digitos forma un numero primo
        for (int i = 2; i <= sqrt(sumaDigitos); ++i) {
            if (sumaDigitos % i == 0) {
                esNumeroPrimo = false;
                break;
            }
        }
    }
    if (esNumeroPrimo) {
        cout <<"La suma de los digitos distintos de cero (" <<sumaDigitos <<") forma un numero primo." <<endl;
    } else{
        cout <<"La suma de los digitos distintos de cero (" <<sumaDigitos <<") no forma un numero primo." <<endl;
    }
    return 0;
}

