#include <iostream>

using namespace std;

int main()
{
    /* Consigna:Hacer un programa para ingresar por teclado el importe de una venta sin el
    descuento y el importe de esa misma venta con el descuento aplicado y luego
    informar por pantalla el porcentaje de descuento aplicada a la misma.
    Ejemplo A. Si el importe de la venta sin descuento es $1500 y el importe de la
    venta con descuento es $1200 entonces el porcentaje de descuento aplicado
    fue el 20%*/

    /* Declaracion de variables */
    int precio_base, precio_descuento, descuento;

    /* Ingreso de datos */
    cout << "Ingrese el precio sin descuentos: " << endl;
    cin >> precio_base;
    cout << "Ingrese el precio con descuentos: " << endl;
    cin >> precio_descuento;

    /* Procesamiento de datos */
    descuento = 100 - ((precio_descuento * 100) / precio_base);

    /* Egreso de datos */
    cout << "El descuento que se aplico es del " << descuento << "%";

    return 0;
}
