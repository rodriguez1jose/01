// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 33

// Problema planteado: Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos los meses de 30 días.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int fecha1, fecha2;
    cout <<"Ingrese dos fechas en formato ddmm: ";
    cin>> fecha1>> fecha2;
    // Extrae el dia y el mes de cada fecha
    int dia1 = fecha1 / 100;
    int mes1 = fecha1 % 100;
    int dia2 = fecha2 / 100;
    int mes2 = fecha2 % 100;
    int diasDiferencia;
    if (mes1 == mes2) {
        diasDiferencia = abs(dia2 - dia1); // Calcula la diferencia de dias directamente
    } else {
    	// Calcula el numero de dias correspondientes a los meses y sumar los dias
        int diasMes1 = 30 * (mes1 - 1) + dia1; // Suponiendo que todos los meses tienen 30 dias
        int diasMes2 = 30 * (mes2 - 1) + dia2;
        diasDiferencia = abs(diasMes2 - diasMes1);
    }
    cout <<"La diferencia en dias entre las fechas es: " <<diasDiferencia <<" dias" <<endl;
    return 0;
}

