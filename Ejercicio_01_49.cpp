// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 49

// Problema planteado: Escribir un programa que muestre en pantalla, con los encabezados correspondientes, el capital (Cn) 
//y los intereses ganados por un capital C0 depositado a un interés compuesto I durante N años. 
//C0, I y N se deben leer por teclado. La fórmula a emplear es: Cn = C0(1+I)n

#include <iostream>
using namespace std;

int main() {
    double C0, I, Cn;
    int N;
    cout <<"Ingrese el capital inicial (C0): ";
    cin>> C0;
    cout <<"Ingrese la tasa de interes (I) en decimal: ";
    cin>> I;
    cout <<"Ingrese el numero de a~nos (N): ";
    cin>> N;
    Cn = C0 * (1 + I)* N; // Calculo del capital final usando la formula del interes compuesto
    cout <<"Capital despues de " <<N <<" a~nos: " <<Cn <<" Bs." <<endl;
    return 0;
}

