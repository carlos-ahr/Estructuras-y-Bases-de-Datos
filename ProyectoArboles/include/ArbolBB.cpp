#include "ArbolBB.h"

using namespace std;

ArbolBB::~ArbolBB() { poda(raiz); }

void ArbolBB::insertarNodo(long d) { insertarNodo(d, raiz); }
void ArbolBB::preOrden(void) {
    actual = raiz;
    preOrden(actual);
}
void ArbolBB::postOrden(void) {
    actual = raiz;
    postOrden(actual);
}
void ArbolBB::entreOrden(void) {
    actual = raiz;
    entreOrden(actual);
}
void ArbolBB::insertarNodo(long d, Nodo *&raiz) {
    Nodo *aux = raiz;
    if (aux == NULL) {
        raiz = new Nodo(d);
    } else {
        if (d <= aux->obtenerDato()) {
            insertarNodo(d, aux->obtenerIzquierdo());
        } else {
            insertarNodo(d, aux->obtenerDerecho());
        }
    }
}
void ArbolBB::poda(Nodo *&aux) {
    if (aux) {
        poda(aux->obtenerIzquierdo());
        poda(aux->obtenerDerecho());
        delete (aux);
        aux = NULL;
    }
}
void ArbolBB::preOrden(Nodo *aux)  // prefijo
{
    if (aux) {
        cout << aux->obtenerDato() << endl;
        preOrden(aux->obtenerIzquierdo());
        preOrden(aux->obtenerDerecho());
    }
}
void ArbolBB::postOrden(Nodo *aux)  // postfijo
{
    if (aux) {
        postOrden(aux->obtenerIzquierdo());
        postOrden(aux->obtenerDerecho());
        cout << aux->obtenerDato() << endl;
    }
}
void ArbolBB::entreOrden(Nodo *aux)  // infijo
{
    if (aux) {
        postOrden(aux->obtenerIzquierdo());
        cout << aux->obtenerDato() << endl;
        postOrden(aux->obtenerDerecho());
    }
}