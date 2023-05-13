#pragma once

#include <iostream>

class Nodo {
private:
    char val;
    Nodo *siguiente;

public:
    Nodo(char v = 0, Nodo *s = NULL);
    int obtenerValor(void);
    Nodo *obtenerSiguiente(void);
    void cambiarValor(char);
    void cambiarSiguiente(Nodo *);
};