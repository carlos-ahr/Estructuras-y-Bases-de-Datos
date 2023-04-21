#include "nodo.h"


Nodo::Nodo(int v, Nodo *s)
{
    dato = v;
    siguiente = s;
}
int Nodo::obtenerValor(void) { return dato; }
Nodo *Nodo::obtenerSiguiente(void) { return siguiente; }
void Nodo::cambiarValor(int v) { dato = v; }
void Nodo::cambiarSiguiente(Nodo *s) { siguiente = s; }
