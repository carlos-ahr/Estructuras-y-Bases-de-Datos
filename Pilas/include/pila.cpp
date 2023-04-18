#include <iostream>

#include "pila.h"

using namespace std;

Pila::Pila(void) { tope = NULL; }
bool Pila::pilaVacia(void) { return tope == NULL; }
void Pila::push(int v) { tope = new Nodo(v, tope); }
int Pila::pop(void)
{
    Nodo *aux;
    int v;
    if (!pilaVacia())
    {
        aux = tope;
        v = aux->obtenerValor();
        tope = aux->obtenerSiguiente();
        delete aux;
    }
    else
    {
        cout << "Pila vacia\n";
        exit(-1);
    }
    return v;
}
int Pila::tam(void)
{
    int cont = 0;
    Nodo *aux = tope;
    while (aux)
    {
        aux = aux->obtenerSiguiente();
        cont++;
    }
    return cont;
}
void Pila::mostrarPila(void)
{
    Nodo *aux = tope;
    cout << "Siguiente\tValor\n";
    cout << "---------\t-----\n";
    while (aux)
    {
        cout << aux << "\t" << aux->obtenerValor() << "\n";
        aux = aux->obtenerSiguiente();
    }
}
void Pila::mostrarParesPila(void)
{
    Nodo *aux = tope;
    int cont = 0;
    cout << "Siguiente\tValor\n";
    cout << "---------\t-----\n";
    while (aux)
    {
        cont++;
        if (cont % 2 == 0)
        {
            cout << aux << "\t" << aux->obtenerValor() << "\n";
            aux = aux->obtenerSiguiente();
        }
        else
        {
            aux = aux->obtenerSiguiente();
        }
    }
}
void Pila::mostrarImparesPila(void)
{
    Nodo *aux = tope;
    int cont = 0;
    cout << "Siguiente\tValor\n";
    cout << "---------\t-----\n";
    while (aux)
    {
        cont++;
        if (cont % 2 != 0)
        {
            cout << aux << "\t" << aux->obtenerValor() << "\n";
            aux = aux->obtenerSiguiente();
        }
        else
        {
            aux = aux->obtenerSiguiente();
        }
    }
}
void Pila::mostrarMultiplos(int m)
{
    Nodo *aux = tope;
    int cont = 0;
    cout << "Siguiente\tValor\n";
    cout << "---------\t-----\n";
    while (aux)
    {
        cont++;
        if (cont % m == 0)
        {
            cout << aux << "\t" << aux->obtenerValor() << "\n";
            aux = aux->obtenerSiguiente();
        }
        else
        {
            aux = aux->obtenerSiguiente();
        }
    }
}
int Pila::contMultiplos(int m)
{
    Nodo *aux = tope;
    int cont = 0;
    while (aux)
    {
        if (cont % m == 0)
        {
            cont++;
            aux = aux->obtenerSiguiente();
        }
        else
        {
            aux = aux->obtenerSiguiente();
        }
    }
    return cont;
}
float Pila::calcPromedio(void)
{
    Nodo *aux = tope;
    int totalNodos = this->tam();
    float acumulador = 0.0;
    while (aux)
    {
        acumulador += aux->obtenerValor();
        aux = aux->obtenerSiguiente();
    }
    return acumulador / totalNodos;
}

void Pila::llenarMultiplo(int x, Pila *pilaAux1, Pila *pilaAux2)
{
    Nodo *aux = tope;
    while (aux)
    {
        if (aux->obtenerValor() % x == 0)
        {
            pilaAux1->push(pop());
        }
        else
        {
            pilaAux2->push(pop());
        }
        aux = aux->obtenerSiguiente();
    }
}

void Pila::juntarPilasIguales(Pila *pilaAux1, Pila *pilaAux2)
{
    int _tam = tam();
    for (int i = 0; i < _tam; i++)
    {
        push(pilaAux1->pop());
        push(pilaAux2->pop());
    }
}

void Pila::juntarPilasDiferentes(Pila *pilaAux1, Pila *pilaAux2)
{
    Nodo *aux1 = pilaAux1->tope;
    Nodo *aux2 = pilaAux2->tope;

    while (aux1 || aux2)
    {
        if (aux1 && aux2)
        {
            push(pilaAux1->pop());
            push(pilaAux2->pop());
        }
        else if (aux1)
        {
            push(pilaAux1->pop());
        }
        else if (aux1)
        {
            push(pilaAux1->pop());
        }
    }
}

Pila::~Pila()
{
    while (!pilaVacia())
    {
        cout << "Eliminando elemento con valor: " << pop() << "\n";
    }
}
