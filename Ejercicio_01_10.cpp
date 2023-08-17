// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 17/08/2023

// Fecha modificaci�n: 17/08/2023

// N�mero de ejericio: 10

// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es ninguna letra que diga que es car�cter especial.

#include <iostream>
#include <cctype> // Necesario para usar la funci�n isalpha()
using namespace std;

int main() {
    char letra;
	cout << "Ingrese la letra: ";
	cin >> letra;

    // Convierte la letra a may�scula para comparar
    char mayuscula = toupper(letra);

    // Verifica si la letra es may�scula
    if ((mayuscula >= 'A' && mayuscula <= 'Z')) {
        // Determina si es vocal o consonante
        if (mayuscula == 'A' || mayuscula == 'E' || mayuscula == 'I' || mayuscula == 'O' || mayuscula == 'U') {
        	cout <<"La letra ingresada es una vocal." <<endl;
        } else {
            cout <<"La letra ingresada es una consonante." <<endl;
        }
    } else {
        cout <<"El car�cter ingresado es ua letra." <<endl;
    }
    return 0;
}

