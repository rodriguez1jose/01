// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 35

// Problema planteado: Un supermercado decide efectuar una promoción de descuentos por el valor de las compras que efectúan sus clientes, 
//esta promoción se basa en las siguientes condiciones:
//Si el total de ventas es < 100 Bs. no se aplica ningún descuento
//Si el total de ventas es de 100 Bs o más se aplica un 5% de descuento
//Si el total de ventas es 500 Bs o más se aplica un 8% de descuento
//Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el total de ventas efectuadas y el total de ventas con el descuento respectivo.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese el numero de clientes: ";
    cin >> n;
    double totalVentas = 0.0;
    double totalVentasConDescuento = 0.0; 

    // Ciclo para procesar cada cliente
    for (int i = 0; i < n; ++i) {
        double compra;
        cout <<"Ingrese el monto de compra del cliente " <<(i + 1) <<": ";
        cin>> compra;
        totalVentas = totalVentas + compra; // Agrega el monto de compra al total de ventas sin descuento

        if (compra >= 500.0) {
            totalVentasConDescuento = totalVentasConDescuento + compra * 0.92;//8% de descuento
        } else if (compra >= 100.0) {
            totalVentasConDescuento = totalVentasConDescuento + compra * 0.95;//5% de descuento
        } else {
            totalVentasConDescuento = totalVentasConDescuento + compra;//Sin descuento
        }
    }
    cout <<"Total de ventas sin descuento: " <<totalVentas <<" Bs." <<endl;
    cout <<"Total de ventas con descuento: " <<totalVentasConDescuento <<" Bs." <<endl;
    return 0;
}


