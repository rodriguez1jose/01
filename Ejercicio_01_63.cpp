// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 63

// Problema planteado: Leer un valor numérico y convertirlo a un número romano (1-9999)

#include <iostream>
using namespace std;

string convertirARomano(int num) {
    if (num <= 0 || num >= 10000) {
        return "Numero fuera del rango";
    }
    string unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string decenas[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string miles[] = {"", "M", "MM", "MMM"};
    string romano = miles[num / 1000] + centenas[(num % 1000) / 100] + decenas[(num % 100) / 10] + unidades[num % 10];
    return romano;
}
int main() {
    int num;
    cout <<"Ingrese un numero entre 1 y 9999: ";
    cin>> num;
    string romano = convertirARomano(num);
    cout <<"Numero romano: " <<romano <<endl;
    return 0;
}

