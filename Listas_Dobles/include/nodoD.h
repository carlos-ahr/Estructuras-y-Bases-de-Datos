#pragma once

#include <iostream>
#include <cstdlib>

class nodoD {
    nodoD *anterior, *siguiente;
    int val;
public:
    nodoD(int val, nodoD *siguiente = NULL, nodoD *anterior = NULL);
    ~nodoD();
    int obtenerValor(void);
    nodoD *obtenerSiguiente(void);
    nodoD *obtenerAnterior(void);
    void modificarValor(int val);
    void modificarSiguiente(nodoD* siguiente);
    void modificarAnterior(nodoD* anterior);
    void mostrarValores(void);
};