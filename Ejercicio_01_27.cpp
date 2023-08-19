// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 27

// Problema planteado: Crear un programa que indique si un número es perfecto o no, se dice que un número es perfecto si la suma de sus divisores es igual al número. 
// Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el número 6 es  perfecto, si el número es 9 tiene como divisores 1, 3, 
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


