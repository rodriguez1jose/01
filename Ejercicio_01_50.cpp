// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 50

// Problema planteado: Escribe una funci�n que tome 3 par�metros: dos de tipo enteros y uno de tipo car�cter. 
//La funci�n deber� sumar, restar, multiplicar o dividir los valores de los dos primeros 
//par�metros dependiendo del c�digo indicado en el tercer par�metro, y devolver el resultado

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

