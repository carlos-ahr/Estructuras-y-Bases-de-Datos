/*
    Grupo: 3CM6
    Nombre: Herrera Rangel Carlos Alberto
    Descricpion: Cabecera de la clase "nodo"
*/

#pragma once

class Nodo {
private:
    int dato;
    Nodo* siguiente;

public:
    Nodo(int, Nodo*);

    int obtenerValor(void);
    Nodo* obtenerSiguiente(void);

    void modificarValor(int v);
    void modificarSiguiente(Nodo* s);

    ~Nodo(void);
};