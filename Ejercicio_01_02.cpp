// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 15/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 2

// Problema planteado: Volumen de una esfera

#include <iostream>

using namespace std;

int main() {
    double radio, volumen;
	const double PI = 3.14159;
    // Lee el radio de la esfera
    cout<<"Ingrese el radio de la esfera: ";
    cin>>radio;

    // Calcula el volumen utilizando la fórmula (4/3)*PI*radio*radio*radio;
    volumen = (4.0/3.0)*PI*radio*radio*radio;

    // Muestra el volumen calculado
    cout <<"El volumen de la esfera es: " <<volumen <<endl;

    return 0;
}

