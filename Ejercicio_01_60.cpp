// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 60

// Problema planteado: Los cubos de Nic�maco

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

