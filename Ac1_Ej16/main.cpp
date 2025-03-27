#include <iostream>

using namespace std;

int main()
{
    /* Consigna: El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada
    frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de
    Micilina y 7 mg de Ácido Sinítico.
    Nos solicitan un programa donde se ingrese la cantidad de frascos de un
    pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido
    Sinítico que son necesarios para elaborarlos.

    /* Declaracion de variables */
    int cant_frasco, cant_pildora, pildora_frasco, cant_b, cant_m, cant_a;
    int betamol, micilina, a_sinitico;
    betamol = 45;
    micilina = 2000;
    a_sinitico = 7;
    pildora_frasco = 75;

    /* Ingreso de datos */
    cout << "Ingrese la cantidad de frascos del pedido: " << endl;
    cin >> cant_frasco;

    /* Procesamiento de datos */
    cant_pildora = cant_frasco * pildora_frasco;
    cant_b = cant_pildora * betamol;
    cant_m = cant_pildora * micilina;
    cant_a = cant_pildora * a_sinitico;

    /* Egreso de datos */
    cout << "Para elaborar el pedido necesita: " << endl;
    cout << cant_b << " mg de Betamol" << endl;
    cout << cant_m << " mg de Micilina" << endl;
    cout << cant_a << " mg de Ácido Sinítico" << endl;

    return 0;
}
