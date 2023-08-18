// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 17/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 14

// Problema planteado: Escriba un programa que dato varios valores num�ricos, hasta el que el usuario ingrese el valor de cero calculo la suma y el promedio de estos

#include <iostream>
using namespace std;

int main() {
    int valor, suma = 0, contador = 0;
	cout <<"Ingrese valores numuricos (ingrese 0 para detener):" <<endl;
    do {
        cin >> valor;
        suma += valor;
        contador++;
    } while (valor != 0);

    // Calcula el promedio solo si hay valores distintos de cero
    if (contador > 1) {
        double promedio = double(suma) / (contador - 1);
        cout <<"Suma: " <<suma <<endl;
        cout <<"Promedio: " <<promedio <<endl;
    } else {
        cout <<"No se ingresaron valores para calcular la suma y el promedio." <<endl;
    }
    return 0;
}

