// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 59

// Problema planteado:Conjetura capic�a: Para obtener un n�mero capic�a a partir de otro n�mero se invierte 
//el orden de sus cifras y se suman el n�mero dado y el invertido. 
//Este proceso se contin�a las veces que sean necesarias hasta obtener un capic�a. Por ejemplo: 
//Partiendo del 78. 
//78 + 87 = 165. 
//165 + 561 = 726. 
//726 + 627 = 1353. 
//1353 + 3531 = 4884 CAPIC�A. 
//El programa debe intentar encontrar capic�as en el rango N y M
#include <iostream>
using namespace std;

// Funci�n para invertir un numero
int invertirNumero(int num) {
    int invertido = 0;
    while (num > 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    return invertido;
}
// Funcion para verificar si un numero es capicua
bool esCapicua(int num) {
    return num == invertirNumero(num);
}
// Funcion para aplicar la conjetura capicua
int conjeturaCapicua(int num) {
    int intentos = 0;
    while (!esCapicua(num)) {
        int invertido = invertirNumero(num);
        num += invertido;
        intentos++;
    }
    return intentos;
}
int main() {
    int N, M;
    cout <<"Ingrese el valor de N: ";
    cin>> N;
    cout <<"Ingrese el valor de M: ";
    cin>> M;
    cout <<"Numeros capicuas encontrados en el rango [" <<N <<", " <<M <<"]:" <<endl;
    for (int i = N; i <= M; ++i) {
        int intentos = conjeturaCapicua(i);
        cout <<i <<" CAPICUA encontrado en " <<intentos <<" intentos" <<endl;
    }
    return 0;
}

