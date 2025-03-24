#include <iostream>

using namespace std;

int main()
{
    /* Declaracion de variables */
    int horas_trabajadas, valor_hora, sueldo;

    /* Ingreso de datos */
    cout << "Ingrese la cantidad de horas trabajadas: " << endl;
    cin >> horas_trabajadas;
    cout << "Ingrese el valor de la hora trabajada: " << endl;
    cin >> valor_hora;

    /* Procesamiento de datos */
    sueldo = horas_trabajadas * valor_hora;

    /* Egreso de datos */
    cout << "El sueldo del empleado es: " << sueldo;

    return 0;
}
