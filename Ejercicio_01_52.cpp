// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 52

// Problema planteado: Obtener xy utilizando productos sucesivos, tanto x como y son enteros positivos o negativos

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cout <<"Ingrese dos numeros enteros (x y y): ";
    cin>> x>> y;
    int potencia = 1;
    // Calcula la potencia utilizando un bucle for
    for (int i = 1; i <= abs(y); ++i) {
        potencia = potencia * x;
    }
    // Si el exponente es negativo, calcular la potencia inversa
    if (y < 0) {
        potencia = 1.0 / potencia;
    }
    cout <<"El resultado de " <<x <<"^" <<y <<" es: " <<potencia <<endl;
    return 0;
}

