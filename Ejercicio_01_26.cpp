// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 26

// Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera necesidad. 
//Una ama de casa selecciona los artículos de su preferencia pasando por los distintos mostradores, cada artículo elegido es colocado en un carrito de mano,
//para asegurar el pago exacto de los artículos comprados la señora anota el precio y la cantidad del artículo, estableciendo cuanto pagara por este articulo; 
//así sumara los demás artículos. Ayude a esta ama de casa a obtener el total de sus comprar, 
//luego de llenar el carrito de manos con todos los artículos de primera necesidad.

#include <iostream>
using namespace std;

int main() {
    int numArticulos;
    double totalCompra = 0;
    cout << "Ingrese la cantidad de articulos: ";
    cin >> numArticulos;

    for (int i = 1; i <= numArticulos; i++) {
        double precio, cantidad, pagoArticulo;
        cout << "Ingrese precio del articulo " << i << ": ";
        cin >> precio;
        cout << "Ingrese cantidad del articulo " << i << ": ";
        cin >> cantidad;
        pagoArticulo = precio * cantidad;
        totalCompra += pagoArticulo;
    }
    cout << "Total de la compra: " << totalCompra << " Bs." << endl;
    return 0;
}

