// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 4

// Problema planteado: Conversi�n de temperatura de grados cent�grado a Kelvin

#include <iostream>
using namespace std;
#include <iostream>

int main() {
    double temperaturaCelsius, temperaturaKelvin;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperaturaCelsius;

    // Realiza la conversi�n a Kelvin (K = �C + 273.15)
    temperaturaKelvin = temperaturaCelsius + 273.15;

    cout <<"La temperatura en Kelvin es: " <<temperaturaKelvin <<" K" <<endl;

    return 0;
}

