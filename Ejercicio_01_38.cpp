// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 38

// Problema planteado:En el a�o 2009 el pa�s A tiene una poblaci�n de 25 millones y el pa�s B de 19.9 millones. 
//Las tasas de crecimiento de la poblaci�n son de 2% y 3% respectivamente. 
//Desarrollar un programa para saber en qu� a�o la poblaci�n del pa�s B supera a la de A.

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

