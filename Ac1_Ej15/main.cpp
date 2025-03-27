#include <iostream>

using namespace std;

int main()
{
    /* Consigna: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
    temperatura m�nima en una zona y tiempo determinado. Dada la temperatura
    m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la
    amplitud t�rmica.
    NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al
    de la temperatura m�nima.

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
