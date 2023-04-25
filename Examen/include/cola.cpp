#include "./cola.h"

#include <cstdlib>
#include <iostream>

using namespace std;

Cola::Cola() { Fin = Inicio = NULL; }
void Cola::agregar(int d) {
    if (!colaVacia()) {
        Fin->cambiarSiguiente(new Nodo(d));
        Fin = Fin->obtenerSiguiente();
    } else {
        Fin = Inicio = new Nodo(d);
    }
}

int Cola::eliminar() {
    Nodo *aux = Inicio;
    int d;
    if (!colaVacia()) {
        Inicio = Inicio->obtenerSiguiente();
        d = aux->obtenerValor();
        delete aux;
    } else {
        cout << "La cola esta vacia";
        Fin = NULL;
        exit(1);
    }
    return d;
}

bool Cola::colaVacia(void) { return Inicio == NULL; }

void Cola::decrementarValores(void) {
    Nodo *aux = Inicio;
    while (aux) {
        aux->cambiarValor(aux->obtenerValor() - 1);
        aux = aux->obtenerSiguiente();
    }
}

void Cola::mostrarCola(void) {
    Nodo *aux = Inicio;
    int cont = 0;
    cout << "No.\tValor\n";
    cout << "---\t-----\n";
    while (aux) {
        cont++;
        cout << cont << "\t" << aux->obtenerValor() << "\n";
        aux = aux->obtenerSiguiente();
    }
}

int Cola::tam(void) {
    Nodo *aux = Inicio;
    int cont = 0;
    while (aux) {
        cont++;
        aux = aux->obtenerSiguiente();
    }
    return cont;
}

void Cola::mostrarPares(void) {
    Nodo *aux = Inicio;
    int cont = 0;
    cout << "No.\tValor\n";
    cout << "---\t-----\n";
    while (aux) {
        cont++;
        if (cont % 2 == 0) {
            cout << cont << "\t" << aux->obtenerValor() << "\n";
            aux = aux->obtenerSiguiente();
        } else {
            aux = aux->obtenerSiguiente();
        }
    }
}

void Cola::mostrarImpares(void) {
    Nodo *aux = Inicio;
    int cont = 0;
    cout << "No.\tValor\n";
    cout << "---\t-----\n";
    while (aux) {
        cont++;
        if (cont % 2 != 0) {
            cout << cont << "\t" << aux->obtenerValor() << "\n";
            aux = aux->obtenerSiguiente();
        } else {
            aux = aux->obtenerSiguiente();
        }
    }
}

void Cola::mostrarMultiplos(int m) {
    Nodo *aux = Inicio;
    int cont = 0;
    cout << "No.\tValor\n";
    cout << "---\t-----\n";
    while (aux) {
        cont++;
        if (cont % m == 0) {
            cout << cont << "\t" << aux->obtenerValor() << "\n";
            aux = aux->obtenerSiguiente();
        } else {
            aux = aux->obtenerSiguiente();
        }
    }
}

int Cola::contarMultiplos(int m) {
    Nodo *aux = Inicio;
    int cont = 0, ac = 0;
    while (aux) {
        cont++;
        if (cont % m == 0) {
            ac++;
            aux = aux->obtenerSiguiente();
        } else {
            aux = aux->obtenerSiguiente();
        }
    }
    return ac;
}

Cola::~Cola() {
    cout << "\n";
    while (!colaVacia()) cout << "Eliminando el nodo con valor [" << eliminar() << "]\n";
}