// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 66

// Problema planteado: . Leer un valor que represente una cierta cantidad de dinero, escribir un algoritmo que 
// permita convertir el dicho valor en billetes y monedas, de tal forma que sea la menor 
// cantidad de billetes y monedas a convertir.

#include <iostream>
using namespace std;

int main() {
    int monto;
    cout << "Ingrese la cantidad de dinero en Bs: ";
    cin >> monto;
    // Calcula la cantidad de billetes desde 5 Bs hasta 200 Bs necesarios y actualiza el monto restante
    int billetes200 = monto / 200;
    monto %= 200;
    int billetes100 = monto / 100;
    monto %= 100;
    int billetes50 = monto / 50;
    monto %= 50;
    int billetes20 = monto / 20;
    monto %= 20;
    int billetes10 = monto / 10;
    monto %= 10;
    int billetes5 = monto / 5;
    monto %= 5;
    // El monto restante en este punto son las monedas de 1 Bs
    int monedas1 = monto;
    // Muestra la cantidad de billetes y monedas en la salida
    if (billetes200 > 0) cout <<billetes200 <<" billete(s) de 200 Bs" <<endl;
    if (billetes100 > 0) cout <<billetes100 <<" billete(s) de 100 Bs" <<endl;
    if (billetes50 > 0) cout <<billetes50 <<" billete(s) de 50 Bs" <<endl;
    if (billetes20 > 0) cout <<billetes20 <<" billete(s) de 20 Bs" <<endl;
    if (billetes10 > 0) cout <<billetes10 <<" billete(s) de 10 Bs" <<endl;
    if (billetes5 > 0) cout <<billetes5 <<" billete(s) de 5 Bs" <<endl;
    if (monedas1 > 0) cout <<monedas1 <<" moneda(s) de 1 Bs" <<endl;
    return 0;
}


