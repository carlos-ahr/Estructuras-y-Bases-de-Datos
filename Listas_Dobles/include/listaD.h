#pragma once

#include "nodoD.h"

class listaDoble {
    nodoD *inicio, *fin;
public:
    listaDoble();
    ~listaDoble();
    void insertarNodo(int val);
    bool listaVacia(void);
    void borrarNodo(int val);
    void mostrarDatosID(void);
    void mostrarDatosDI(void);
    nodoD *obtenerSiguiente(nodoD*);
    nodoD *obtenerAnterior(nodoD*);
    void copiarParesID(listaDoble &L2);
    void copiarParesDI(listaDoble &L2);
    void guardarDatos(void);
    int tam(void);
    void mostrarPares(void);
    void mostrarImpares(void);
    void mostrarMultiplos(int m);
    int contarMultiplos(int m);
};