#pragma once

#include "./nodo.h"

class Cola
{
private:
    Nodo *Inicio;
    Nodo *Fin;

public:
    Cola();
    ~Cola();
    void insertar(int d);
    int elimina(void);
    void mostrarCola(void);
    void decrementa(void);
    int tam(void);
    void mostrarParesCola(void);
    void mostrarImparesCola(void);
    void mostrarMultiplos(int m);
    int contMultiplos(int m);
    bool laColaEstaVacia(void);
};