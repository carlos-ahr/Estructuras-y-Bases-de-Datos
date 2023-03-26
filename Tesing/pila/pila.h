/*
    Grupo: 3CM6
    Nombre: Herrera Rangel Carlos Alberto
    Descricpion: Cabecera de la clase "pila"
*/

#pragma once

#include "./nodo.h"

class Pila{
private:
    Nodo* tope;

public:
    Pila(void);

    bool pilaVacia(void);
    int tamano(void);

    void push(int v);
    int pop(void);

    void mostrarPila(void);
    void mostrarPares(void);
    void mostrarImpares(void);

    ~Pila(void);
};