// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 38

// Problema planteado:En el año 2009 el país A tiene una población de 25 millones y el país B de 19.9 millones. 
//Las tasas de crecimiento de la población son de 2% y 3% respectivamente. 
//Desarrollar un programa para saber en qué año la población del país B supera a la de A.

#include <iostream>
using namespace std;

int main() {
    double poblacionA = 25.0;
    double poblacionB = 19.9;
    double tasaCrecimientoA = 0.02;
    double tasaCrecimientoB = 0.03;
    int anio = 2009;

    // Bucle que calcula cuando la poblacion de B supera a la de A
    while (poblacionA >= poblacionB) {
        // Incremento de la poblacion de cada ciudad usando tasas de crecimiento
        poblacionA = poblacionA + poblacionA * tasaCrecimientoA;
        poblacionB = poblacionB + poblacionB * tasaCrecimientoB;
        anio++;
    }
    cout <<"La poblacion de B supera a la de A en el a~no " <<anio <<endl;

}

