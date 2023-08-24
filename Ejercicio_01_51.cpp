// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 51

// Problema planteado: Dados dos números enteros, realizar el algoritmo que calcule el cociente y el resto. 
//El método para obtener el cociente y el resto es por restas sucesivas

#include <iostream>
using namespace std;

int main() {
    int dividendo, divisor;
    cout <<"Ingrese el dividendo: ";
    cin>> dividendo;
    cout <<"Ingrese el divisor: ";
    cin>> divisor;

    int cociente = 0;
    // Realiza la division mientras el dividendo sea mayor o igual al divisor
    while (dividendo >= divisor) {
        dividendo= dividendo - divisor;
        cociente++;
    }
    int resto = dividendo; // El valor restante del dividendo es el resto
    cout <<"Cociente: " <<cociente <<endl;
    cout <<"Resto: " <<resto <<endl;
    return 0;
}

