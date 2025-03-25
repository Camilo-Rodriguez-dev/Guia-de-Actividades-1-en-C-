#include <iostream>

using namespace std;

int main()
{
    /* Consigna:Hacer un programa para que un comercio ingrese por teclado la recaudación en
    pesos para cada una de las cuatro semanas del mes. El programa debe listar la
    recaudación promedio por semana y el porcentaje de recaudación por semana.
    Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación
    promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.*/

    /* Declaracion de variables */
    int sem_1, sem_2, sem_3, sem_4, prom_1, prom_2, prom_3, prom_4, prom_sem, total_mens;

    /* Ingreso de datos */
    cout << "Ingrese la recuadacion de la primer semana: " << endl;
    cin >> sem_1;
    cout << "Ingrese la recuadacion de la segunda semana: " << endl;
    cin >> sem_2;
    cout << "Ingrese la recuadacion de la tercer semana: " << endl;
    cin >> sem_3;
    cout << "Ingrese la recuadacion de la cuarta semana: " << endl;
    cin >> sem_4;

    /* Procesamiento de datos */
    total_mens = sem_1 + sem_2 + sem_3 + sem_4;
    prom_1 = (sem_1 * 100) / total_mens;
    prom_2 = (sem_2 * 100) / total_mens;
    prom_3 = (sem_3 * 100) / total_mens;
    prom_4 = (sem_4 * 100) / total_mens;
    prom_sem = (sem_1 + sem_2 + sem_3 + sem_4) / 4;

    /* Egreso de datos */
    cout << "La recaudacion promedio por semana fue de: $" << prom_sem << endl;
    cout << "El porcentaje de recaudacion por semana es:" << endl;
    cout << "La primer semana: " << prom_1 << "%" << endl;
    cout << "La segunda semana: " << prom_2 << "%" << endl;
    cout << "La tercer semana: " << prom_3 << "%" << endl;
    cout << "La cuarta semana: " << prom_4 << "%" << endl;

    return 0;
}
