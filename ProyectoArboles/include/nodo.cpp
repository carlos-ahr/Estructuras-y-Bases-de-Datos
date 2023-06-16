#include "nodo.h"

using namespace std;

Nodo::Nodo(long dato, Nodo *izquierdo, Nodo *derecho) {
    this->dato = dato;
    this->izquierdo = izquierdo;
    this->derecho = derecho;
}

Nodo *&Nodo::obtenerDerecho(void) { return derecho; }
Nodo *&Nodo::obtenerIzquierdo(void) { return izquierdo; }
long Nodo::obtenerDato(void) { return dato; }
void Nodo::modificarDato(long dato) { this->dato = dato; }
void Nodo::modificarIzquierdo(Nodo *izquierdo) { this->izquierdo = izquierdo; }
void Nodo::modificarDerecho(Nodo *derecho) { this->derecho = derecho; }
void Nodo::mostrarDatos(void) {
    if (!izquierdo)
        cout << "NULL";
    else
        cout << izquierdo;
    cout << " <- " << dato << " -> ";
    if (!derecho)
        cout << "NULL";
    else
        cout << derecho;
    cout << endl;
}