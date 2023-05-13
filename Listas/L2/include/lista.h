#pragma once

#include "nodo.h"

class Lista {
private:
    Nodo *Inicio;

public:
    Lista();
    ~Lista();
    void insertar(char);
    char eliminar(char);
    bool listaVacia(void);
    void mostrarLista(void);
};