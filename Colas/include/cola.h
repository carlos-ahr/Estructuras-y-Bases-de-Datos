#pragma once

#include "./nodo.h"

class Cola {
private:
    Nodo *Inicio;
    Nodo *Fin;

public:
    Cola();
    ~Cola();
    void agregar(int d);
    int eliminar(void);
    bool colaVacia(void);
    void decrementarValores(void);
    void mostrarCola(void);
    int tam(void);
    void mostrarPares(void);
    void mostrarImpares(void);
    void mostrarMultiplos(int m);
    int contarMultiplos(int m);
};