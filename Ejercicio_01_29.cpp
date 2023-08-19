// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 29

// Problema planteado: En una llanter�a se ha establecido una promoci�n de las llantas marca �Ponchadas�, dicha promoci�n consiste en lo siguiente:
// Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se compran de cinco a 10 y de 200 Bs. si se compran m�s de 10.
//Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las llantas que compra y la que tiene que pagar por el total de la compra.

#include <iostream>
using namespace std;

int main() {
    int cantidadLlantas;
    double precioLlanta, totalCompra;
    cout <<"Ingrese la cantidad de llantas a comprar: ";
    cin>> cantidadLlantas;
    cout <<"Ingrese el precio de cada llanta: ";
    cin>> precioLlanta;

    if (cantidadLlantas < 5) {
        totalCompra = cantidadLlantas * precioLlanta;
    } else if (cantidadLlantas >= 5 && cantidadLlantas <= 10) {
        totalCompra = cantidadLlantas * precioLlanta * 0.8; // 20% de descuento
    } else {
        totalCompra = cantidadLlantas * precioLlanta * 0.6; // 40% de descuento
    }
    cout <<"El precio por llanta es: " <<precioLlanta <<" Bs." <<endl;
    cout <<"Total de la compra: " <<totalCompra <<" Bs." <<endl;
    return 0;
}

