// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 1

// Problema planteado: �rea de un tri�ngulo

#include <iostream>
#include <cmath> // Necesario para usar la funci�n sqrt
using namespace std;

int main() {
    double base, altura, area;
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
	cin >> altura;

    // Calcula el �rea utilizando la f�rmula base * altura / 2
    area = (base * altura) / 2;

    // Muestra el �rea calculada
    cout<<"El area del triangulo es: " <<area <<endl;

    return 0;
}

