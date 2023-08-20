// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 44

// Problema planteado:La comercial “La Estrella del Sur” vende n productos en un día, de los cuales factura al precio de cada uno con un IVA del 13% 
//y si el monto final se excede en 2500 Bs, se aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el día y 
//calcular el pago del IVA del 13% al servicio de Impuestos Nacionales.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese el numero de productos vendidos: ";
    cin>> n;
    double sumaVentas = 0.0;  // Variable para almacenar la suma total de ventas
    // Bucle para ingresar los precios de los productos y sumar las ventas
    for (int i = 1; i <= n; ++i) {
        double precio;
        cout <<"Ingrese el precio del producto " <<i <<": ";
        cin>> precio; 
        sumaVentas = sumaVentas + precio;  // Agrega el precio a la suma total de ventas
    }
    double iva = sumaVentas * 0.13;  // Calcula el IVA del 13% sobre la suma total de ventas
    // Aplica descuento si la suma total de ventas es mayor a 2500 Bs.
    if (sumaVentas > 2500.0) {
        double descuento = sumaVentas * 0.05;
        sumaVentas = sumaVentas - descuento;  
    }
    cout <<"Suma total de ventas realizadas en el dia: " <<sumaVentas <<" Bs." <<endl;
    cout <<"Pago del IVA del 13% al servicio de Impuestos Nacionales: " <<iva <<" Bs." <<endl;
    return 0;
}

