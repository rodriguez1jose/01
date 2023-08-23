// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 62

// Problema planteado: En una guarder�a hay 25 ni�os de 1, 2 y 3 a�os. Los ni�os de 1 a�o consumen 6 pa�ales 
//al d�a, los ni�os de 2 a�os consumen 3 pa�ales diarios y los ni�os de 3 a�os consumen 
//2 pa�ales diarios. Se desea conocer el consumo total de pa�ales diarios.
//Datos: edad1
//edad2
//. . . . .
//edad25

#include <iostream>
using namespace std;

int main() {
    const int totalNinos = 25;
    int consumoTotal = 0;

    for (int i = 1; i <= totalNinos; ++i) {
        int edad;
        cout <<"Ingrese la edad del ni~no " <<i <<": ";
        cin>> edad;

        int consumoDiario = 0;
        if (edad == 1) {
            consumoDiario = 6;
        } else if (edad == 2) {
            consumoDiario = 3;
        } else if (edad == 3) {
            consumoDiario = 2;
        } else {
            cout <<"Edad no valida. Ingrese 1, 2 o 3." <<endl;
            --i; // Resta uno al contador para repetir la entrada de edad
        }
        consumoTotal = consumoTotal + consumoDiario;
    }
    cout <<"El consumo total de pa�ales diarios en la guarderia es: " <<consumoTotal <<" pa~nales" <<endl;
    return 0;
}

