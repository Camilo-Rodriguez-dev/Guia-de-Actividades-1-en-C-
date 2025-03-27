#include <iostream>

using namespace std;

int main()
{
    /* Consigna: La amplitud térmica es la diferencia entre la temperatura máxima y la
    temperatura mínima en una zona y tiempo determinado. Dada la temperatura
    máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la
    amplitud térmica.
    NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al
    de la temperatura mínima.

    /* Declaracion de variables */
    int temp_max, temp_min, amp_term;

    /* Ingreso de datos */
    cout << "Ingrese la temperatura maxima: " << endl;
    cin >> temp_max;
    cout << "Ingrese la temperatura minima: " << endl;
    cin >> temp_min;

    /* Procesamiento de datos */
    amp_term = temp_max - temp_min;

    /* Egreso de datos */
    cout << "La amplitud termica es de: " << amp_term << " grados centigrados.";

    return 0;
}
