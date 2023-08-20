// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 45

// Problema planteado: Calcular la suma de los cuadrados de los primeros 100 primeros números compuestos.

#include <iostream>
using namespace std;
// Funcion para verificar si un numero es compuesto
bool esCompuesto(int num) {
    if (num <= 1) {
        return false;  // Los numeros menores o iguales a 1 no son compuestos ni primos
    }
    // Bucle para verificar si num es divisible por algun numero
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return true;  // Si num es divisible por otro numero que no sea 1 o si mismo es compuesto
        }
    }
    return false;
}
int main() {
    int n = 100;  // Limite superior para la busqueda de numeros compuestos
    int sumaCuadrados = 0;
    // Bucle
    for (int i = 4; i <= n; ++i) {
        if (esCompuesto(i)) {
            sumaCuadrados = sumaCuadrados + i * i;  // Suma el cuadrado del número compuesto
        }
    }
    cout <<"La suma de los cuadrados de los primeros 100 numeros compuestos es: " <<sumaCuadrados <<endl;
    return 0;
}

