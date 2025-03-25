#include <iostream>

using namespace std;

int main()
{
    /* Consigna: Hacer un programa para ingresar por teclado una cantidad de minutos y
    mostrar por pantalla a cuántos días, horas y minutos equivalen.
    Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que
    equivalen a 1 día, 1 hora y 20 minutos.
    Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que
    equivalen a 0 día, 8 horas y 0 minutos.*/

    /* Declaracion de variables */
    int tiempo, resto_t, dia, hora, minuto;

    /* Ingreso de datos */
    cout << "Ingrese la cantidad de minutos: " << endl;
    cin >> tiempo;

    /* Procesamiento de datos */
    dia = tiempo / 1440;
    resto_t = tiempo - (dia * 1440);
    hora = resto_t / 60;
    minuto = resto_t % 60;


    /* Egreso de datos */
    cout << "Eso equivale a " << dia << " dias y " << hora << " horas " << minuto << " minutos";
    return 0;
}
