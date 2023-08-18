// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 16

// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos.

#include <iostream>
using namespace std;

int main() {
    int segundos, minutos, horas;
	cout <<"Ingrese un valor en segundos: ";
	cin>> segundos;

    minutos = segundos / 60;
    segundos %= 60;
    horas = minutos / 60;
    minutos %= 60;

    cout <<"Horas: " <<horas <<endl;
    cout <<"Minutos: " <<minutos <<endl;
	cout <<"Segundos: " <<segundos <<endl;
    return 0;
}

