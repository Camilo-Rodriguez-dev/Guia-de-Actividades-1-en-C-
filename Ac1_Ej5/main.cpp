#include <iostream>

using namespace std;

int main()
{
   /* Consigna:
     Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
     programa para ingresar por teclado la cantidad de alfajores vendidos de cada
     una de las tres marcas y luego se informe el porcentaje de ventas para cada
     una de ellas.
     Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
     programa calculará e informará A: 50%, B: 12,50% y C: 37,50%*/

    /* Declaracion de variables */
    float a, b, c, total, porc_a, porc_b, porc_c;

    /* Ingreso de datos */
    cout << "Ingrese la cantidad de alfojores que vendio de cada marca en el siguinte orden A, B y C:" << endl;
    cin >> a >> b >> c;

    /* Procesamiento de datos */
    total = a + b + c;
    porc_a = (a * 100) / total;
    porc_b = (b * 100) / total;
    porc_c = (c * 100) / total;

    /* Egreso de datos */
    cout << "El porcentaje de ventas de cada marca es: " << endl;
    cout << "Marca A: " << porc_a << "%" << endl;
    cout << "Marca B: " << porc_b << "%" << endl;
    cout << "Marca C: " << porc_c<< "%" << endl;
    return 0;
}
