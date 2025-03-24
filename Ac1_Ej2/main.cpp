#include <iostream>

using namespace std;

int main()
{
    /* Consigna:
    Hacer un programa que solicite por teclado que se ingresen dos números y
    luego guardarlos en dos variables distintas. A continuación se deben
    intercambiar mutuamente los valores en ambas variables y mostrarlos por
    pantalla.
    Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
    usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3 */

    /* Declaracion de variables */
    int a, b, c;

    /* Ingreso de datos */
    cout << "Ingrese el primer numero: " << endl;
    cin >> a;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> b;

    /* Procesamiento de datos */
    c = a;
    a = b;
    b = c;

    /* Egreso de datos */
    cout << "Me perdi :( el primero era: " << a << endl;
    cout << "Y como no me equivoco ;) el segundo era: " << b;

    return 0;
}
