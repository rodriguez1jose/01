// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 46

// Problema planteado: La empresa �Limbo S.A.�, empresa de seguros tiene contratados a N vendedores. Cada uno hace tres ventas a la semana. 
//Su pol�tica de pagos es que un vendedor recibe un  sueldo base, y un 10% extra por comisiones de sus ventas. El gerente de su compa��a 
//desea saber cu�nto dinero obtendr� en la semana cada vendedor por concepto de comisiones por las tres ventas realizadas,
//y cuanto tomando en cuenta su sueldo base y sus comisiones

#include <iostream>
using namespace std;

int main() {
    int n;
    double sueldoBase, totalPago = 0.0;
    cout <<"Ingrese el numero de vendedores: ";
    cin>> n;
    cout <<"Ingrese el sueldo base: ";
    cin>> sueldoBase;
    const double comision = 0.10;  // Definicion de la tasa de comision constante

    // Bucle para procesar la informaci�n de cada vendedor
    for (int i = 1; i <= n; ++i) {
        double comision = 3 * sueldoBase * comision;  // Calculo de la comision
        double pagoTotal = sueldoBase + comision;  // Calculo del pago total
        cout <<"Vendedor " <<i <<": Comision: " <<comision <<" Bs. - Total: " <<pagoTotal <<" Bs." <<endl;
        totalPago = totalPago + pagoTotal;
    }
    cout <<"Pago total a todos los vendedores por concepto de comisiones: " <<totalPago <<" Bs." <<endl;
    return 0;
}


