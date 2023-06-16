#pragma once

#include <iostream>

class Nodo {

   public:
    Nodo(long dato, Nodo *izquierdo = NULL, Nodo *derecho = NULL);
    Nodo *&obtenerDerecho(void);
    Nodo *&obtenerIzquierdo(void);
    long obtenerDato(void);
    void modificarDato(long dato);
    void modificarIzquierdo(Nodo *izquierdo);
    void modificarDerecho(Nodo *derecho);
    void mostrarDatos(void);

   private:
    Nodo *izquierdo;
    long dato;
    Nodo *derecho;
};