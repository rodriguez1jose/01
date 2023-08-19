// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 26

// Problema planteado: En una tienda comercial, las amas de casa compran diversos art�culos de primera necesidad. 
//Una ama de casa selecciona los art�culos de su preferencia pasando por los distintos mostradores, cada art�culo elegido es colocado en un carrito de mano,
//para asegurar el pago exacto de los art�culos comprados la se�ora anota el precio y la cantidad del art�culo, estableciendo cuanto pagara por este articulo; 
//as� sumara los dem�s art�culos. Ayude a esta ama de casa a obtener el total de sus comprar, 
//luego de llenar el carrito de manos con todos los art�culos de primera necesidad.

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

