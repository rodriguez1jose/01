// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 60

// Problema planteado: Los cubos de Nicómaco

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese un numero entero positivo (n): ";
    cin>> n;

    int numImpar = 1;
    int sumaImpares = 0;

    for (int i = 1; i <= n; ++i) {
        sumaImpares = sumaImpares + numImpar;
        cout <<"Cubo " <<i <<": " <<sumaImpares <<"^3 = " <<sumaImpares * sumaImpares * sumaImpares <<endl;
        numImpar = numImpar + 2;
    }
    return 0;
}

