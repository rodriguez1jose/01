// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 54

// Problema planteado: Hallar la raíz cuadrada de un número por aproximaciones.

#include <iostream>
#include <cmath>
using namespace std;

double raizBabilonica(double num, double error) {
    double x = num; 
    double y = 1.0; 

    // la diferencia entre x e y sea menor que el error deseado
    while (fabs(x - y) > error) {
        x = (x + y) / 2; // Actualiza x
        y = num / x;     // Actualiza y
    }
    return x; // Retornar la raiz cuadrada aproximada
}
int main() {
    double num;
    cout << "Ingrese un numero para calcular su raiz cuadrada: ";
    cin >> num;
    double error = 0.0001; // Error maximo
    double raiz = raizBabilonica(num, error);
    cout <<"La raiz cuadrada aproximada de " <<num <<" es: " <<raiz <<endl;
    return 0;
}

