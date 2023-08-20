// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 40

// Problema planteado:Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas:  5 Bs. 1 Bs. 0.50 Bs. 0.20 Bs. y 0.10 Bs.
//Realizar el programa en el que dado el precio del artículo y la cantidad en bolivianos entregada por el consumidor nos indique el 
//cambio a entregar empleando el menor número posible de monedas.

#include <iostream>
using namespace std;

int main() {
    double precio, cantidadEntregada;
    cout << "Ingrese el precio del articulo en Bs.: ";
    cin >> precio;
    cout << "Ingrese la cantidad entregada por el consumidor en Bs.: ";
    cin >> cantidadEntregada;

    // Calcula el cambio a entregar
    double cambio = cantidadEntregada - precio;

    // Calcula la cantidad de monedas de 5 Bs. necesarias para el cambio
    int monedas5 = cambio / 5;
    cambio = cambio - monedas5 * 5;

    int monedas1 = cambio;
    cambio = cambio - monedas1;

    int monedas50 = cambio / 0.5;
    cambio = cambio - monedas50 * 0.5;

    int monedas20 = cambio / 0.2;
    cambio = cambio - monedas20 * 0.2;

    int monedas10 = cambio / 0.1;

    cout <<"Cambio a entregar:" <<endl;
    cout <<"Monedas de 5 Bs.: " <<monedas5 <<endl;
    cout <<"Monedas de 1 Bs.: " <<monedas1 <<endl;
    cout <<"Monedas de 0.50 Bs.: " <<monedas50 <<endl;
    cout <<"Monedas de 0.20 Bs.: " <<monedas20 <<endl;
    cout <<"Monedas de 0.10 Bs.: " <<monedas10 <<endl;
    return 0;
}

