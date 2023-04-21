#include <iostream>
#include "cola.h"

using namespace std;

Cola::Cola()
{
    Fin = Inicio = NULL;
}
void Cola::insertar(int d)
{
    if (!laColaEstaVacia())
    {
        Fin->cambiarSiguiente(new Nodo(d));
        Fin = Fin->obtenerSiguiente();
    }
    else
    {
        Fin = Inicio = new Nodo(d);
    }
}
int Cola::elimina()
{
    Nodo *aux = Inicio;
    int d;
    if (!laColaEstaVacia())
    {
        Inicio = Inicio->obtenerSiguiente();
        d = aux->obtenerValor();
        delete aux;
    }
    else
    {
        cout << "La cola esta vacia";
        Fin = NULL;
        exit(1);
    }
    return d;
}

void Cola::mostrarCola(void)
{
    Nodo *aux = Fin;
    cout << "Siguiente\tValor\n";
    cout << "---------\t-----\n";
    while (aux)
    {
        cout << aux << "\t" << aux->obtenerValor() << "\n";
        aux = aux->obtenerSiguiente();
    }
}

void Cola::decrementar(void)
{
    Nodo *aux = Inicio;
    while (aux)
    {
        aux->cambiarValor(aux->obtenerValor()-1);
        aux = aux->obtenerSiguiente();
    }
}

int Cola::tam(void)
{
    Nodo *aux = Inicio;
    int cont = 1;
    while (aux)
    {
        cont++;
        aux = aux->obtenerSiguiente();
    }
    return cont;
}

void Cola::mostrarParesCola(void)
{
    Nodo *aux = Fin;
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

void Cola::mostrarImparesCola(void)
{
    Nodo *aux = Fin;
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

void Cola::mostrarMultiplos(int m)
{
    Nodo *aux = Fin;
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

int Cola::contMultiplos(int m)
{
    Nodo *aux = Fin;
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

bool Cola::laColaEstaVacia(void)
{
    return Inicio == NULL;
}

Cola::~Cola()
{
    while (!laColaEstaVacia())
        cout << elimina() << endl;
    cin.get();
}


