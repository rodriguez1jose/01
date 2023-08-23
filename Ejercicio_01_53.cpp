// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 53

// Problema planteado: Escriba un programa que permita al usuario obtener los valores de las funciones trigonom�tricas:

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double anguloGrados;
    const double PI = 3.14159;
    cout <<"Ingrese el angulo en grados: ";
    cin>> anguloGrados;
    // Convertir el �ngulo de grados a radianes
    double anguloRadianes = anguloGrados * (PI / 180.0);
    double seno = sin(anguloRadianes);
    double coseno = cos(anguloRadianes);
    double tangente = tan(anguloRadianes);
    // Calcula las funciones trigonometricas utilizando radianes
    cout <<"Seno(" <<anguloGrados << "grados " <<seno <<endl;
    cout <<"Coseno(" <<anguloGrados << "grados " <<coseno <<endl;
    cout <<"Tangente(" <<anguloGrados << "grados " <<tangente <<endl;
    return 0;
}

