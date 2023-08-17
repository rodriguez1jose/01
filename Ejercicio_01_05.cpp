// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 5

// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y ra�z cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )

#include <iostream>
#include <cmath> // Necesario para usar la funci�n sqrt()
using namespace std;
int main() {
    double x1, y1, x2, y2, distancia;
	cout << "Ingrese las coordenadas de P1 (x1 y1): ";
	cin>> x1>> y1;
    cout<< "Ingrese las coordenadas de P2 (x2 y2): ";
    cin>> x2>> y2;

    // Calcular la distancia utilizando la f�rmula
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	cout <<"La distancia entre P1 y P2 es: " <<distancia <<endl;

    return 0;
}

