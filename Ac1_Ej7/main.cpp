#include <iostream>

using namespace std;

int main()
{
    /* Consigna: Hacer un programa para ingresar por teclado el importe de una venta y el
    porcentaje de descuento aplicada a la misma y luego informar por pantalla el
    importe a pagar.
    Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces
    el total a pagar será de $1020.
    Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el
    total a pagar será de $800*/

    /* Declaracion de variables */
    int precio_base, descuento, precio_final;

    /* Ingreso de datos */
    cout << "Ingrese el importe de la venta: " << endl;
    cin >> precio_base;
    cout << "Ingrese el porcentaje de descuento: " << endl;
    cin >> descuento;

    /* Procesamiento de datos */
    precio_final = ((100 - descuento) * precio_base) / 100;

    /* Egreso de datos */
    cout << "El importe a pagar es: $" << precio_final;

    return 0;
}
