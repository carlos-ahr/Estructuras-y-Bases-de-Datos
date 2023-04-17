#pragma once

#include "nodo.h"

class Pila {
    Nodo* tope;
public:
    Pila(void);
    bool pilaVacia(void);
    void push(int);
    int pop(void);
    int tam(void);
    void mostrarPila(void);
    void mostrarParesPila(void);
    void mostrarImparesPila(void);
    void mostrarMultiplos(int);
    int contMultiplos(int);
    float calcPromedio(void);
    ~Pila();
};
