// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 15/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 1

// Problema planteado: Área de un triángulo

#include <iostream>
#include <cmath> // Necesario para usar la función sqrt
using namespace std;

int main() {
    double base, altura, area;
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
	cin >> altura;

    // Calcula el área utilizando la fórmula base * altura / 2
    area = (base * altura) / 2;

    // Muestra el área calculada
    cout<<"El area del triangulo es: " <<area <<endl;

    return 0;
}

