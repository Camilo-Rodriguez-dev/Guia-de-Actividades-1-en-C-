#include <iostream>

using namespace std;

int main()
{
    /* Consigna: Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
    por pantalla a cuantos días y horas equivalen.
    Ejemplo A: si se ingresan 26 horas el programa mostrará por pantalla que
    equivalen a 1 día y 2 horas.
    Ejemplo B: si se ingresan 72 horas el programa mostrará por pantalla que
    equivalen a 3 días y 0 horas.
    Ejemplo C: si se ingresan 20 horas el programa mostrará por pantalla que
    equivalen a 0 días y 20 horas.*/

    /* Declaracion de variables */
    int horas, dias, horas_ingresadas;
    /* Ingreso de datos */
    cout << "Ingrese la cantidad de horas: " << endl;
    cin >> horas_ingresadas;

    /* Procesamiento de datos */
    dias = horas_ingresadas / 24;
    horas = horas_ingresadas % 24;


    /* Egreso de datos */
    cout << "Eso equivale a " << dias << " dias y " << horas << " horas";

    return 0;
}
