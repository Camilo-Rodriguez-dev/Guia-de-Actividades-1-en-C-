#include <iostream>

using namespace std;

int main()
{
    /* Consigna:Hacer un programa para ingresar por teclado una cantidad de minutos y
    mostrar por pantalla a cuantas horas y minutos equivalen.
    Ejemplo A: si se ingresan 380 minutos el programa mostrará por pantalla que
    equivalen a 6 horas y 20 minutos.
    Ejemplo B: si se ingresan 720 minutos el programa mostrará por pantalla que
    equivalen a 12 horas y 0 minutos.
    Ejemplo C: si se ingresan 50 minutos el programa mostrará por pantalla que
    equivalen a 0 horas y 50 minutos*/

    /* Declaracion de variables */
    int minutos, horas, min_ingresados;
    /* Ingreso de datos */
    cout << "Ingrese la cantidad de minutos: " << endl;
    cin >> min_ingresados;

    /* Procesamiento de datos */
    horas = min_ingresados / 60;
    minutos = min_ingresados % 60;


    /* Egreso de datos */
    cout << "Eso equivale a " << horas << " horas y " << minutos << " minutos";
    return 0;
}
