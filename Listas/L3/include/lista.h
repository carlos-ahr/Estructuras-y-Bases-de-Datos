#pragma once

#include "nodo.h"

class Lista {
private:
    Nodo *Inicio;

public:
    Lista();
    ~Lista();
    void insertar(int);
    int eliminar(int);
    bool listaVacia(void);
    void mostrarLista(void);
};