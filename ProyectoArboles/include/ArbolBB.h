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
    int contarHojas(void);

   private:
    Nodo *raiz;
    Nodo *actual;
    void poda(Nodo *&);
    void preOrden(Nodo *);
    void postOrden(Nodo *);
    void entreOrden(Nodo *);
    int contarHojas(Nodo *&);
    void insertarNodo(long d, Nodo *&);
};
