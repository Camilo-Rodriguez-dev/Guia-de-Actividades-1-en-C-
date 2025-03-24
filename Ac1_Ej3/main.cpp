#include <iostream>

using namespace std;

int main()
{
    /* Consigna:
    Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más
    $700 de premio por cada auto vendido. Hacer un programa que permita
    ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
    informar por pantalla el sueldo total a pagar.
    Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
    pagar es de $7800.*/

    /* Declaracion de variables */
    int sueldo_base, bono_venta, cant_ventas, sueldo_final;
    sueldo_base = 5000;
    bono_venta = 700;

    /* Ingreso de datos */
    cout << "Ingrese la cantidad de autos vendidos del empleado: " << endl;
    cin >> cant_ventas;

    /* Procesamiento de datos */
    sueldo_final = (cant_ventas * bono_venta) + sueldo_base;

    /* Egreso de datos */
    cout << "El sueldo final es: $" << sueldo_final;

    return 0;
}
