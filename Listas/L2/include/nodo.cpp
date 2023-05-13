#include "./nodo.h"

using namespace std;

Nodo::Nodo(char v, Nodo *s) {
    val = v;
    siguiente = s;
}
int Nodo::obtenerValor(void) { return val; }
Nodo *Nodo::obtenerSiguiente(void) { return siguiente; }
void Nodo::cambiarValor(char v) { val = v; }
void Nodo::cambiarSiguiente(Nodo *s) { siguiente = s; }