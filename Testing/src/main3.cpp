/*
    1)  Llenar una pila de tamaño n.
    2)  Vaciarla para llenar otras dos pilas mitad y mitad.
    3)  Evaluar:
        a)  Si n es par la primera mitad en P2 y la segunda en P3 
        b)  Si n no es par:
            -   P2 tendra un tamaño de N/2+1
            -   P3 tendra un tamaño de N/2
*/

#include "../include/pila.h"

#include <iostream>

using namespace std;

int main(void) {
    char res;
    do{
        system("clear");
        int n;
        cout << "Ingrese el numero de nodos que tendra la pila: ";
        cin >> n;
        Pila p1, p2, p3;
        for(int i=0; i<n; i++){
            int v;
            cout << "Ingrese el valor [" << i+1 << "]: ";
            cin >> v;
            p1.push(v);
        }
        cout << "\nPila 1:\n\n";
        p1.mostrarPila();
        if (n%2 == 0) {
            for (int i=0; i<n/2 ; i++) {
                p2.push(p1.pop());
            }
            for (int i=0; i<n/2 ; i++) {
                p3.push(p1.pop());
            }
        }
        else if(n%2 != 0) {
            for (int i=0; i<n/2+1 ; i++) {
                p2.push(p1.pop());
            }
            for (int i=0; i<n/2 ; i++) {
                p3.push(p1.pop());
            }
        }
        cout << "\nPila 2:\n\n";
        p2.mostrarPila();
        cout << "\nPila 3:\n\n";
        p3.mostrarPila();
        cout << "\n\nDesea ejecutar nuevamente el programa (s/n)? ";
        cin >> res;
        res = tolower(res);
    } while(res=='s');
    return 0;
}
