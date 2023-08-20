// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 39

// Problema planteado:Escriba un programa para leer dos valores enteros distintos entre si, 
//de tal forma que si el primer número es mayor al segundo
//genere una serie descendente, caso contrario muestre una serie ascendente, el factor de incremento o decremento es la unidad.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout <<"Ingrese dos numeros enteros distintos: ";
    cin>> num1>> num2; 
    if (num1 < num2) {
        // Bucle para imprimir numeros en orden ascendente desde 'num1' hasta 'num2'
        for (int i = num1; i <= num2; ++i) {
            cout << i << " ";
        }
    } else {
        // Bucle para imprimir numeros en orden descendente desde 'num1' hasta 'num2'
        for (int i = num1; i >= num2; --i) {
            cout << i << " ";
        }
    }
    cout <<endl;  
    return 0;
}



