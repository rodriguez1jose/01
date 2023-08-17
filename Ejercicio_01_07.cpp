// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 7

// Problema planteado: Numero amigo

#include <iostream>
using namespace std;
int calcularSumaDivisores(int numero) {
    int suma = 1; // 1 es un divisor propio de todos los n�meros
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            suma += i;
            if (i != numero / i) {
                suma += numero / i;
            }
        }
    }
    return suma;
}

int main() {
    int limiteSuperior;
	cout << "Ingrese el limite superior para buscar pares de numeros amigos: ";
	cin >> limiteSuperior;

    for (int a = 1; a <= limiteSuperior; ++a) {
        int b = calcularSumaDivisores(a);
        if (b > a && calcularSumaDivisores(b) == a) {
            cout <<"Par de numeros amigos: (" <<a <<", " <<b <<")" <<endl;
        }
    }
    return 0;
}

