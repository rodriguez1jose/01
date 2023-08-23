// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 62

// Problema planteado: En una guardería hay 25 niños de 1, 2 y 3 años. Los niños de 1 año consumen 6 pañales 
//al día, los niños de 2 años consumen 3 pañales diarios y los niños de 3 años consumen 
//2 pañales diarios. Se desea conocer el consumo total de pañales diarios.
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
    cout <<"El consumo total de pañales diarios en la guarderia es: " <<consumoTotal <<" pa~nales" <<endl;
    return 0;
}

