// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 19

// Problema planteado: Convertir coordenadas polares en rectangulares

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double radio, theta; // Coordenadas polares: radio y angulo en radianes
    cout <<"Ingrese el radio y el angulo en radianes: ";
    cin>> radio>> theta;
    // Convertir coordenadas polares a rectangulares
    double x = radio * cos(theta);
    double y = radio * sin(theta);
	cout << "Coordenadas rectangulares: (" << x << ", " << y << ")" <<endl;
    return 0;
}

