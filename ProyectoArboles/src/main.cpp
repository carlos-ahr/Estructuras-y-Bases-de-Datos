#include <iostream>
#include <cstdlib>

#include "../include/ArbolBB.h"

using namespace std;

int main(void) {
    ArbolBB A;
    A.insertarNodo(531);
    A.insertarNodo(580);
    A.insertarNodo(540);
    A.insertarNodo(530);
    A.insertarNodo(535);
    A.insertarNodo(520);
    A.insertarNodo(525);
    A.insertarNodo(518);
    A.insertarNodo(502);
    A.insertarNodo(100);

    cout << "\nA en entreorden:" << endl;
    A.entreOrden();
    cout << endl << endl;
    cout << "\nA en Postorden:" << endl;
    A.postOrden();
    cout << endl << endl;
    cout << "\nA en Preorden:" << endl;
    A.preOrden();
    cin.get();
    return 0;
}