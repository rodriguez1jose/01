// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 43

// Problema planteado:Obtener el promedio de n�meros enteros positivos introducidos por teclado,
// el algoritmo se detiene cuando se lea un n�mero negativo o cero.

#include <iostream>
using namespace std;

int main() {
    int num;
    int sumNumeros = 0;
    int cantNumeros = 0;
    cout <<"Ingrese numeros enteros positivos (para terminar ingrese un numero =<0): ";
    cin>> num;
    // Bucle para ingresar y procesar numeros positivos
    while (num > 0) {
        sumNumeros += num;
        cantNumeros++;
        cin>> num;
    }
    // Verifica si se ingresaron numeros validos antes de calcular el promedio
    if (cantNumeros > 0) {
        double promedio = static_cast<double>(sumNumeros) / cantNumeros;
        cout <<"El promedio de los numeros; "<<promedio <<endl;
    } else {
        cout <<"No se ingresaron numeros validos." <<endl;
    }
    return 0;
}


