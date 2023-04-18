#pragma once

class Nodo
{
    int dato;
    Nodo *siguiente;

public:
    Nodo(int v, Nodo *s);
    int obtenerValor(void);
    Nodo *obtenerSiguiente(void);
    void cambiarValor(int);
    void cambiarSiguiente(Nodo *);
    ~Nodo();
};
