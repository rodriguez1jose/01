// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 65

// Problema planteado: Escribir un progama que acepte un número no mayor a dos dígitos y muestre el mismo de manera literal:
// Ej: 23 : Veintitrés

#include <iostream>
using namespace std;

string unidades[] = {"", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve"};
string especiales[] = {"Diez", "Once", "Doce", "Trece", "Catorce", "Quince", "Dieciséis", "Diecisiete", "Dieciocho", "Diecinueve"};
string decenas[] = {"", "Diez", "Veinte", "Treinta", "Cuarenta", "Cincuenta", "Sesenta", "Setenta", "Ochenta", "Noventa"};

string convertirNumero(int num) {
    string resultado;

    if (num >= 1 && num <= 9) {
        resultado = unidades[num];
    } else if (num >= 10 && num <= 19) {
        resultado = especiales[num - 10];
    } else if (num >= 20 && num <= 99) {
        int digitoUnidad = num % 10;
        int digitoDecena = num / 10;
        resultado = decenas[digitoDecena];
        if (digitoUnidad > 0) {
            resultado = resultado + " y " + unidades[digitoUnidad];
        }
    } else {
        resultado = "Numero fuera de rango";
    }
    return resultado;
}
int main() {
    int num;
    cout <<"Ingrese un numero no mayor a dos digitos: ";
    cin>> num;

    if (num < 1 || num > 99) {
        cout <<"Numero fuera de rango." <<endl;
        return 1; // Sale con error
    }
    string resultado = convertirNumero(num);
    cout <<"Nmero de forma literal: " <<resultado <<endl;
    return 0;
}

