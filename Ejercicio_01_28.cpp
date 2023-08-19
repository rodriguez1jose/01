// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 28

// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación, empleando sumas sucesivas.

#include <iostream>
using namespace std;

int multiplicacionSinOperador(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado += a;
    }
    return resultado;
}
int main() {
    int num1, num2;
    cout <<"Ingrese dos numeros naturales: ";
    cin>> num1>> num2;
    int resultado = multiplicacionSinOperador(num1, num2);
    cout <<"El resultado de " <<num1 <<" * " <<num2 <<" es: " <<resultado <<endl;
    return 0;
}

