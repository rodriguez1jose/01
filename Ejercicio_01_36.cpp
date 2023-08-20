// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 36

// Problema planteado: Dadas las edades y alturas de n alumnos, mostrar la edad y la estatura media, la cantidad de alumnos mayores de 18 años
//y la cantidad de alumnos que miden más de 1.75 cm

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese el numero de alumnos: ";
    cin>> n;

    int sumaEdades = 0; 
    double sumaEstaturas = 0.0;  
    int alumnosMayores18 = 0; 
    int alumnosAltos = 0;  
    // Bucle para ingresar datos de cada alumno
    for (int i = 1; i <= n; ++i) {
        int edad;
        double estatura;
        cout <<"Ingrese la edad del alumno " <<i <<": ";
        cin>> edad;  
        cout <<"Ingrese la estatura del alumno " <<i <<" en cm: ";
        cin>> estatura; 
        sumaEdades = sumaEdades + edad;  // Agrega la edad a la suma total de edades
        sumaEstaturas = sumaEstaturas + estatura;  // Agrega la estatura a la suma total de estaturas
        if (edad > 18) {
            alumnosMayores18++;  // Incrementa el contador si el alumno es mayor de 18 años
        }
        if (estatura > 175.0) {
            alumnosAltos++;  // Incrementa el contador si el alumno es más alto que 175 cm
        }
    }
    // Calcula los promedios de edades y estaturas
    double promedioEdades = static_cast<double>(sumaEdades) / n;
    double promedioEstaturas = sumaEstaturas / n;
    cout <<"Edad promedio: " <<promedioEdades <<" a~nos" <<endl;
    cout <<"Estatura promedio: " <<promedioEstaturas <<" cm" <<endl;
    cout <<"Cantidad de alumnos mayores de 18 a~nos: " <<alumnosMayores18 <<endl;
    cout <<"Cantidad de alumnos con estatura mayor a 175 cm: " <<alumnosAltos <<endl;
    return 0;
}

