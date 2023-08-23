// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 50

// Problema planteado: Escribe una función que tome 3 parámetros: dos de tipo enteros y uno de tipo carácter. 
//La función deberá sumar, restar, multiplicar o dividir los valores de los dos primeros 
//parámetros dependiendo del código indicado en el tercer parámetro, y devolver el resultado

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char oper;

    cout <<"Ingrese dos numeros enteros: ";
    cin>> a>> b;
    cout <<"Ingrese la operacion (+, -, *, /): ";
    cin>> oper;

    double resultado = 0.0;  // Inicia el resultado
	//Realiza calculos basados en la operacion de entrada
    if (oper == '+') {
        resultado = a + b;
    } else if (oper == '-') {
        resultado = a - b;
    } else if (oper == '*') {
        resultado = a * b;
    } else if (oper == '/') {
        if (b != 0) {
            resultado = double(a) / b;
        } else {
            cout <<"Error. No se puede dividir por cero." <<endl;
        }
    } else {
        cout <<"Error. Operacion invalida." <<endl;
    }
    if (oper == '+' || oper == '-' || oper == '*' || (oper == '/' && b != 0)) {
        cout <<"El resultado de la operacion es: " <<resultado <<endl;
    }
    return 0;
}

