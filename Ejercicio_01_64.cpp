// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 64

// Problema planteado: Leer un numero entero positivo y ordene sus dígitos del menor al mayor, la resultado es otro numero entero.

#include <iostream>
using namespace std;

int ordenarDigitos(int num) {
    int digitos[10] = {}; // inicia los elementos en 
    // Contar la frecuencia de cada digito en el numero
    while (num > 0) {
        int digito = num % 10;
        digitos[digito]++;
        num /= 10;
    }
    int numOrdenado = 0;
    int potencia = 1;
    // Reconstruye el numero ordenado
    for (int i = 0; i < 10; ++i) {
        while (digitos[i] > 0) {
            numOrdenado = numOrdenado + i * potencia;
            potencia = potencia * 10;
            digitos[i]--;
        }
    }
    return numOrdenado;
}
int main() {
    int num;
    cout <<"Ingrese un numero entero positivo: ";
    cin>> num;
    if (num < 0) {
        cout <<"El numero ingresado no es positivo." <<endl;
        return 0;
    }
    int numOrdenado = ordenarDigitos(num);
    cout <<"El numro con los digitos ordenados es: " <<numOrdenado <<endl;
    return 0;
}



