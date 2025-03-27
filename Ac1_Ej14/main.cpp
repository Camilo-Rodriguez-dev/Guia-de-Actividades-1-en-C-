#include <iostream>

using namespace std;

int main()
{
    /* Consigna: Hacer un programa para ingresar el importe de una compra y el descuento a
    aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
    importe total a cobrar.
    Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
    Importe: 4500, Descuento: 1800, total: 2700.*/

    /* Declaracion de variables */
    int imp_compra, descuento, imp_descuento, imp_final;

    /* Ingreso de datos */
    cout << "Ingrese el importe de la compra:" << endl;
    cin >> imp_compra;
    cout << "Ingrese el descuento:" << endl;
    cin >> descuento;

    /* Procesamiento de datos */
     imp_descuento = (descuento * imp_compra) / 100;
     imp_final = imp_compra - imp_descuento;

    /* Egreso de datos */
    cout << "El importe de sin descuento es: " << imp_compra << endl;
    cout << "El importe del descuento es: " << imp_descuento << endl;
    cout << "El importe a cobrar es: " << imp_final << endl;

    return 0;
}
