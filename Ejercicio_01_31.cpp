// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 31

// Problema planteado: Leer dos n�meros y verificar si uno es m�ltiplo del otro o no lo es

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout <<"Ingrese dos numeros enteros: ";
    cin>> num1>> num2;
	// Verifica si num1 es multiplo de num2
    if (num1 % num2 == 0) {
        cout <<num1 <<" es multiplo de " <<num2 <<endl;
    } 
	// Verifica si num2 es multiplo de num1
	else if (num2 % num1 == 0) {
        cout <<num2 <<" es multiplo de " <<num1 <<endl;
    } 
	// Si no son multiplos entre si
	else {
        cout <<"Los numeros no son multiplos entre si." <<endl;
    }
    return 0;
}

