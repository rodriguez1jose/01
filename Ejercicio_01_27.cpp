// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 27

// Problema planteado: Crear un programa que indique si un n�mero es perfecto o no, se dice que un n�mero es perfecto si la suma de sus divisores es igual al n�mero. 
// Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el n�mero 6 es  perfecto, si el n�mero es 9 tiene como divisores 1, 3, 
// entonces 1+3=4 no es perfecto.

#include <iostream>
using namespace std;

bool esNumeroPerfecto(int num) {
    int sumaDivisores = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sumaDivisores += i;
        }
    }
    return sumaDivisores == num;
}
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (esNumeroPerfecto(num)) {
        cout <<"El numero " <<num <<" es perfecto." <<endl;
    } else {
        cout <<"El numero " <<num <<" no es perfecto." <<endl;
    }
    return 0;
}


