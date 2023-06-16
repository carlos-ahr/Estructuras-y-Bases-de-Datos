#include <iostream>
#include <cstdlib>

#include "../include/ArbolBB.h"

using namespace std;

int main(void) {
    ArbolBB A, B, C;

    A.insertarNodo(4);
    A.insertarNodo(2);
    A.insertarNodo(6);
    A.insertarNodo(1);
    A.insertarNodo(3);
    A.insertarNodo(5);
    A.insertarNodo(7);

    B.insertarNodo(8);
    B.insertarNodo(3);
    B.insertarNodo(10);
    B.insertarNodo(1);
    B.insertarNodo(6);
    B.insertarNodo(14);
    B.insertarNodo(4);
    B.insertarNodo(7);
    B.insertarNodo(13);

    C.insertarNodo(15);
    C.insertarNodo(6);
    C.insertarNodo(20);
    C.insertarNodo(3);
    C.insertarNodo(9);
    C.insertarNodo(18);
    C.insertarNodo(24);
    C.insertarNodo(1);
    C.insertarNodo(4);
    C.insertarNodo(7);
    C.insertarNodo(12);
    C.insertarNodo(17);

    cout << endl << "El arbol [A] tiene " << A.contarHojas() << " hojas." << endl;
    cout << endl << "El arbol [B] tiene " << B.contarHojas() << " hojas." << endl;
    cout << endl << "El arbol [C] tiene " << C.contarHojas() << " hojas." << endl;

    cout << endl;
    cin.get();

    return 0;
}