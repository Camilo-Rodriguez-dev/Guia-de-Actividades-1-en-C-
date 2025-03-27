#include <iostream>

using namespace std;

int main()
{
    /* Consigna: Hacer un programa para un cajero automático para ingresar un importe a retirar
    y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
    entregar.
    Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se
    deberán entregar 2 billetes de $1.000, 1 billete de $500, 0 billetes de $200 y 0
    billetes de $100.
    Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se
    deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0
    billetes de $100.
    Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se
    deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0
    billetes de $500.
    Recordatorio. Considerar en todos los casos que el importe a retirar es en todos
    los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o
    $10.*/

    /* Declaracion de variables */
    int imp_retira, billete_m, billete_q, billete_d, billete_c;

    /* Ingreso de datos */
    cout << "Ingrese el importe a retirar: " << endl;
    cin >> imp_retira;

    /* Procesamiento de datos */
    billete_m = imp_retira / 1000;
    billete_q = (imp_retira - (billete_m * 1000)) / 500;
    billete_d = (imp_retira - (billete_m * 1000 + billete_q * 500)) / 200;
    billete_c = (imp_retira - (billete_m * 1000 + billete_q * 500 + billete_d * 200)) / 100;

    /* Egreso de datos */
    cout << "Se entregaran: " << endl;
    cout << billete_m << " billetes de $1.000" << endl;
    cout << billete_q << " billetes de $500" << endl;
    cout << billete_d << " billetes de $200" << endl;
    cout << billete_c << " billetes de $100" << endl;

    return 0;
}
