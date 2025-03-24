#include <iostream>

using namespace std;

int main()
{
    /* Consigna:
     Hacer un programa para ingresar por teclado la cantidad de asientos totales en
     un avi�n y la cantidad de pasajes ocupados y luego calcular e informar el
     porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
     Ejemplo si el avi�n tiene 200 asientos totales y se vendieron 80 pasajes, el
     porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no
     ocupaci�n ser� de un 60%.*/

    /* Declaracion de variables */
     int asientos_totales, asientos_ocupados, porcentaje_ocupados, porcentaje_libres;

    /* Ingreso de datos */
     cout << "ingrese al cantidad de asientos en el avion: " << endl;
     cin >> asientos_totales;
     cout << "ingrese al cantidad de asientos ocupados en el avion: " << endl;
     cin >> asientos_ocupados;

    /* Procesamiento de datos */
     porcentaje_ocupados = (asientos_ocupados * 100) / asientos_totales;
     porcentaje_libres = 100 - porcentaje_ocupados;

    /* Egreso de datos */
     cout << "El porcentaje de asientos ocupados es: " << porcentaje_ocupados << "%" << endl;
     cout << "El porcentaje de asientos libres es: " << porcentaje_libres << "%" << endl;

    return 0;
}
