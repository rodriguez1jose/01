// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 23

// Problema planteado: Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura de Ullman 
//(en honor al matemático Ullman) que consiste en lo siguiente:
// - Empiece con cualquier entero positivo.
// - Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
//- Obtenga enteros sucesivamente repitiendo el proceso.
//Al final se obtendrá el número 1, independientemente del entero inicial. Por ejemplo, cuando el entero inicial es 26, la secuencia será:
//26 13 40 20 10 5 16 8 4 2 1

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un entero n (> 1): ";
	cin >> n;
    // Aplica la conjetura de Ullman
    while (n > 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << "1" <<endl;
    return 0;
}

