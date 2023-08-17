// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 15/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 4

// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin

#include <iostream>
using namespace std;
#include <iostream>

int main() {
    double temperaturaCelsius, temperaturaKelvin;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperaturaCelsius;

    // Realiza la conversión a Kelvin (K = °C + 273.15)
    temperaturaKelvin = temperaturaCelsius + 273.15;

    cout <<"La temperatura en Kelvin es: " <<temperaturaKelvin <<" K" <<endl;

    return 0;
}

