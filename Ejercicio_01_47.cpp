// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 47

// Problema planteado: Un negocio de “Cosméticos” de belleza, contratara a n vendedoras para la venta de sus productos. 
//Cada Vendedora en promedio debe vender 10 productos en un mes.La cancelación de los sueldos a las vendedoras se realiza cada fin de mes, 
//bajo las siguientes características. Una vendedora recibe un sueldo básico de acuerdo a su antigüedad y además se añade 
//Un sueldo extra por comisión de ventas del 10% del total vendido.
//La propietaria del negocio desde conocer cuánto de sueldo debe cancelar a cada una de sus vendedoras y cuanto de comisión recibirá como extra.
//Diseñar un algoritmo para este problema.

#include <iostream>
using namespace std;

int main() {
    int n;
    double sueldoBase;
    cout <<"Ingrese el numero de vendedoras: ";
    cin>> n;
    cout <<"Ingrese el sueldo base: ";
    cin>> sueldoBase;
    // Calcula el sueldo y comision para cada vendedora
    for (int i = 1; i <= n; ++i) {
        double ventas;
        cout <<"Ingrese la cantidad de productos vendidos por la vendedora " <<i <<": ";
        cin>> ventas;
        // Calcula la comision (10% de las ventas)
        double comision = ventas * 0.1;
        // Calcula el sueldo total
        double sueldoTotal = sueldoBase + comision;

        cout <<"Vendedora " <<i <<":" <<endl;
        cout <<"Sueldo base: " <<sueldoBase <<" Bs." <<endl;
        cout <<"Comision: " <<comision << " Bs." <<endl;
        cout <<"Sueldo total: " <<sueldoTotal <<" Bs." <<endl;
        cout <<"-------------------------" <<endl;
    }
    return 0;
}

