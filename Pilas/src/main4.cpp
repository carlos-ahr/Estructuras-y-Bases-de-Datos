#include "../include/pila.h"
#include <iostream>

using namespace std;

int main(void)
{
    char res;
    do
    {
        system("clear");
        Pila pila1;
        Pila pila2, pila3;
        int tam = 10, mul;
        for (int i = 1; i <= tam; i++)
        {
            pila1.push(i);
        }
        cout << "Ingrese el multiplo: ";
        cin >> mul;
        cout << "\nLa pila original es:" << endl;
        pila1.mostrarPila();
        pila1.llenarMultiplo(mul, pila2, pila3);
        cout << "\nLa pila que contiene los multiplos es:" << endl;
        pila2.mostrarPila();
        cout << "\nLa pila que contiene los no multiplos es:" << endl;
        pila3.mostrarPila();
        cout << "\n\nDesea ejecutar nuevamente el programa (s/n)? ";
        cin >> res;
        res = tolower(res);
    } while (res == 's');
    return 0;
}