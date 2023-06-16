#pragma once

#include "nodo.h"

class ArbolBB {
   public:
    ArbolBB();
    ~ArbolBB();
    void insertarNodo(long d);
    void preOrden(void);
    void postOrden(void);
    void entreOrden(void);

   private:
    Nodo *raiz;
    Nodo *actual;
    void poda(Nodo *&);
    void preOrden(Nodo *);
    void postOrden(Nodo *);
    void entreOrden(Nodo *);
    void insertarNodo(long d, Nodo *&);
};
ArbolBB::ArbolBB() {
    raiz = NULL;
    actual = NULL;
}