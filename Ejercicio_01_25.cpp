// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 25

// Problema planteado: Escribir un programa que permita adivinar un número que sea genere internamente al azar, el cual está en el rango de 0 a 50. 
//El usuario debe adivinar este número en base a  aproximaciones, para lo cual se dispone de 5 intentos. Veamos un ejemplo:
//Supongamos que el número “pensado” por la computadora sea el 42

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Cambia la semilla de generacion de numeros aleatorios
    // Genera un numero randomico
    int numeroSecreto = rand();
    // Limita el rango del numero generado entre 0 y 50
    numeroSecreto = numeroSecreto % 51;
    cout <<"Estoy pensando en un numero entre 0 y 50." << endl;

    int adivinanza; // Declara la variable fuera del ciclo
    for (int intento = 1; intento <= 5; ++intento) {
        cout <<"Intento " <<intento << ": ";
        cin >> adivinanza;
        if (adivinanza < numeroSecreto) {
            cout <<"El numero esta entre " <<adivinanza <<" y 50" <<endl;
        } else if (adivinanza > numeroSecreto) {
            cout << "El numero esta entre 0 y " << adivinanza << endl;
        } else {
            cout << "¡Felicitaciones! Adivinaste el numero." << endl;
            break; // Sale del ciclo si adivino el numero
        }
    }
    if (numeroSecreto != adivinanza) {
        cout << "No adivinaste el numero. Era " << numeroSecreto << "." << endl;
    }
    return 0;
}
