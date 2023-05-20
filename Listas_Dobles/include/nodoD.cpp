#include "nodoD.h"

nodoD ::nodoD(int val, nodoD *siguiente = NULL, nodoD *anterior = NULL) {
    this->val = val;
    this->siguiente = siguiente;
    this->anterior = anterior;
}

nodoD ::~nodoD() { std :: cout << "[x] Eliminando nodo...\n"; }

int nodoD ::obtenerValor(void) { return val; }

nodoD *nodoD ::obtenerSiguiente(void) { return siguiente; }

nodoD *nodoD ::obtenerAnterior(void) { return anterior; }

void nodoD ::modificarValor(int val) { this->val = val; }

void nodoD ::modificarSiguiente(nodoD *siguiente) {this->siguiente = siguiente; }

void nodoD ::modificarAnterior(nodoD *anterior) {this->anterior = anterior; }

void nodoD ::mostrarValores(void) {
    std :: cout << "Valor\tSiguiente\n";
    std :: cout << "-----\t---------\n";
    if(siguiente == NULL)
        std :: cout << val << "\t" << "NULL";
    else
        std :: cout << val <<  "\t" << siguiente;
    std :: cout << std :: endl;
}