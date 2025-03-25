#include <iostream>

using namespace std;

int main()
{
    /* Consigna: Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
    por pantalla a cuantos d�as y horas equivalen.
    Ejemplo A: si se ingresan 26 horas el programa mostrar� por pantalla que
    equivalen a 1 d�a y 2 horas.
    Ejemplo B: si se ingresan 72 horas el programa mostrar� por pantalla que
    equivalen a 3 d�as y 0 horas.
    Ejemplo C: si se ingresan 20 horas el programa mostrar� por pantalla que
    equivalen a 0 d�as y 20 horas.*/

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
