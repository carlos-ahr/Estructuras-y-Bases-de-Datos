#include <stdlib.h>
#pragma once
class Nodo
{
private:
    int dato;
    Nodo *siguiente;

public:
    Nodo(int v = 0, Nodo *s = NULL);
    int obtenerValor(void);
    Nodo *obtenerSiguiente(void);
    void cambiarValor(int);
    void cambiarSiguiente(Nodo *);
};