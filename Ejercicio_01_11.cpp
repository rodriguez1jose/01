 // Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 11

// Problema planteado: Se tiene el pago de un docente de la UCB de planilla permanente y planilla contrato civil. Se paga por categoría de acuerdo con la siguiente tabla.
//Categoria Permanente Contrato Civil
// A 25% 18%
// B 20% 14%
// C 15% 12%
//Calcule el total ganado siendo el salario por hora de 150 Bs por hora. Se debe ingresar cuantas horas a la semana pasa clases y en que categoría está.

#include <iostream>
#include <iomanip> // Necesario para usar setprecision()
#include <cctype> // Necesario para usar la función isalpha()
using namespace std;

int main() {
    const double salarioPorHora = 150.0;
    double horasSemanales;
    char categoria;
    cout <<"Ingrese las horas a la semana que pasa clases: ";
    cin>> horasSemanales;
    cout <<"Ingrese la categoria (A, B o C): ";
    cin>> categoria;
    char CATEGORIA = toupper (categoria); //convierte las letras a mayusculas si entro en minusculas

    // Calcula el porcentaje segun la categoria y el tipo de planilla
    double porcentaje;
    if (CATEGORIA == 'A') {
        porcentaje = 0.25;
    } else if (CATEGORIA == 'B') {
        porcentaje = 0.20;
    } else if (CATEGORIA == 'C') {
        porcentaje = 0.15;
    } else {
        cout <<"Categoria invalida." <<endl;
        return 1;
    }
    // Calcula el salario total
    double salarioTotal = horasSemanales * salarioPorHora * porcentaje;
    cout <<"El salario total ganado es: " <<fixed <<setprecision(2) <<salarioTotal <<" Bs" <<endl;
    return 0;
}

