// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 18

// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada.

#include <iostream>
using namespace std;

int main() {
    double ladoBase, altura;
	cout <<"Ingrese el lado de la base de la piramide: ";
    cin>> ladoBase;
	cout <<"Ingrese la altura de la piramide: ";
    cin>> altura;

    double volumen = (ladoBase * ladoBase * altura) / 3.0;
	cout << "El volumen de la piramide es: " << volumen <<endl;
    return 0;
}

