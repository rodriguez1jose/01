// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 41

// Problema planteado: Un cierto número de obreros de una empresa reciben pagos semanales de dinero, en función a las horas trabajadas y una tarifa hora. 
//Se sabe que cuando las horas que trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al 
//doble de una hora normal, considere además un descuento del 5% a todos los obreros para pagar su prima de seguro. Por lo tanto determine: 
//el pago total y el pago neto por cada obrero y también el pago general a todos los obreros y cuanto se retendrá por la prima de manera general.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese el numero de obreros: ";
    cin>> n;

    double tarifaHora, totalPago = 0.0, totalNeto = 0.0, totalPrima = 0.0;
    const double tarifaExtra = 2.0;

    // Bucle para procesar los datos de cada obrero
    for (int i = 1; i <= n; ++i) {
        int horasTrabajadas;
        cout <<"Ingrese las horas trabajadas por el obrero " << i << ": ";
        cin>> horasTrabajadas;

        cout <<"Ingrese la tarifa hora para el obrero " << i << ": ";
        cin>> tarifaHora;

        double pago = 0.0;

        // Calculo del pago basado en horas trabajadas y tarifa hora
        if (horasTrabajadas > 40) {
            int horasExtras = horasTrabajadas - 40;
            pago = 40 * tarifaHora + horasExtras * tarifaExtra * tarifaHora;
        } else {
            pago = horasTrabajadas * tarifaHora;
        }
        // Calculo de descuento por prima de seguro y pago neto
        double descuentoPrima = pago * 0.05;
        double pagoNeto = pago - descuentoPrima;
        // Acumulacion de totales para pago, pago neto y prima de seguro
        totalPago = totalPago + pago;
        totalNeto = totalNeto + pagoNeto;
        totalPrima = totalPrima + descuentoPrima;
        
        cout <<"Pago total para el obrero " <<i <<": " <<pago <<" Bs." <<endl;
        cout <<"Pago neto para el obrero " <<i <<": " <<pagoNeto <<" Bs." <<endl;
    }
    cout <<"Pago total a todos los obreros: " <<totalPago <<" Bs." <<endl;
    cout <<"Total retenido por prima de seguro: " <<totalPrima <<" Bs." <<endl;
    return 0;
}


