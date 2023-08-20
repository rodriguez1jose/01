// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 42

// Problema planteado:En una granja se requiere determinar el promedio de calidad de las n gallinas que hay en la granja. 
//La calidad de cada gallina se obtiene según la fórmula: Calidad = (peso de la gallina * altura de la gallina)/Numero de huevos que pone 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese el numero de gallinas: "; 
    cin>> n;
    double sumCalidad = 0.0;  // Variable para almacenar la suma de las calidades de las gallinas
    // Bucle para procesar los datos de cada gallina
    for (int i = 1; i <= n; ++i) {
        double peso, altura;
        int numHuevos;
        cout <<"Ingrese el peso de la gallina " <<i <<": ";
        cin>> peso;
        cout <<"Ingrese la altura de la gallina " <<i <<": ";
        cin>> altura;
        cout <<"Ingrese la cantidad de huevos que pone la gallina " <<i <<": ";
        cin>> numHuevos;
        // Calcula la calidad de la gallina en funcion del peso, altura y cantidad de huevos
        double calidad = (peso * altura) / numHuevos;
        sumCalidad = sumCalidad + calidad;  // Agrega la calidad al total acumulado
    }
    double promedioCalidad = sumCalidad / n;
    cout <<"El promedio de calidad de las gallinas es: " <<promedioCalidad <<endl;
    return 0;
}

