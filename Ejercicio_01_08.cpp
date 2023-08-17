// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 8

// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una hora se cobra 5 Bs adicional por hora.
// Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar.


#include <iostream>
using namespace std;

int main() {
    int horasEstacionado;
    const int tarifaPrimeraHora = 7;
    const int tarifaAdicional = 5;

    cout << "Ingrese la cantidad de horas estacionado: ";
    cin >> horasEstacionado;

    // Calcular el costo total
    int costoTotal;
    if (horasEstacionado <= 1) {
        costoTotal = tarifaPrimeraHora;
    } else {
        costoTotal = tarifaPrimeraHora + (horasEstacionado - 1) * tarifaAdicional;
    }
    // Mostrar el costo total
    cout <<"El costo total de estacionamiento es: " <<costoTotal <<" Bs" <<endl;

    return 0;
}

