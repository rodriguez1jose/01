// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 59

// Problema planteado:Conjetura capicúa: Para obtener un número capicúa a partir de otro número se invierte 
//el orden de sus cifras y se suman el número dado y el invertido. 
//Este proceso se continúa las veces que sean necesarias hasta obtener un capicúa. Por ejemplo: 
//Partiendo del 78. 
//78 + 87 = 165. 
//165 + 561 = 726. 
//726 + 627 = 1353. 
//1353 + 3531 = 4884 CAPICÚA. 
//El programa debe intentar encontrar capicúas en el rango N y M
#include <iostream>
using namespace std;

// Función para invertir un numero
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

