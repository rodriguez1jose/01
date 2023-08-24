// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 23/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 69

// Problema planteado: Calcular el coeficiente binomial a partir de la lectura de dos números enteros, a partir 
//de la relación: (n C m)=n!/((n-m)!*m!)

#include <iostream>
using namespace std;
// Funcion para calcular el factorial de un numero
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
// Funcion para calcular el coeficiente binomial
int coeficienteBinomial(int n, int m) {
    if (n < m) {
        return 0; // El coeficiente binomial no esta definido
    }
    int coeficiente = factorial(n) / (factorial(n - m) * factorial(m));
    return coeficiente;
}
int main() {
    int n, m;
    cout <<"Ingrese dos numeros enteros n y m (n >= m): ";
    cin>> n>> m;
    int coeficiente = coeficienteBinomial(n, m);
    cout <<"El coeficiente binomial (" <<n <<" C " <<m <<") es: " <<coeficiente <<endl;

    return 0;
}

