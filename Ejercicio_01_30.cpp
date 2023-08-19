// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 30

// Problema planteado: Calcular la siguiente sucesión 2-2/3+4/3-5/4+...±(n+1)/n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un valor para n: ";
    cin >> n;
    double suma = 2.0;  // Inicia la suma con el primer termino
    int signo = -1;
    for (int i = 1; i <= n; ++i) {
        double termino = (i + 1.0) / i;  // Calcula el termino actual
        suma = suma + signo * termino;
        signo = signo * (-1);// Cambia el signo para el proximo termino
    }
    cout <<"La suma de la sucesion hasta n = " <<n <<" es: " <<suma <<endl;
    return 0;
}
