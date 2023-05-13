#include "lista.h"

using namespace std;

Lista ::Lista() { Inicio = NULL; }

void Lista ::insertar(int val) {
    Nodo *aux;
    if (listaVacia() || aux->obtenerValor() > val) {
        Inicio = new Nodo(val, Inicio);
    } else {
        aux = Inicio;
        while (aux->obtenerSiguiente() && aux->obtenerSiguiente()->obtenerValor() <= val) {
            aux = aux->obtenerSiguiente();
        }
        aux->cambiarSiguiente(new Nodo(val, aux->obtenerSiguiente()));
    }
}

int Lista ::eliminar(int val) {
    int valEliminado = 0;
    Nodo *anterior, *aux;
    if (!listaVacia()) {
        aux = Inicio;
        anterior = NULL;
        while (aux && aux->obtenerValor() < val) {
            anterior = aux;
            aux = aux->obtenerSiguiente();
        }
        if(existeVal(val)) {
            return -1;
        }
        else {
            if(!anterior) {
                Inicio = aux->obtenerSiguiente();
            }
            else {
                anterior->cambiarSiguiente(aux->obtenerSiguiente());
            }
            valEliminado = aux->obtenerValor();
            delete aux;
        }
    }
    else {
        cout << "[x] La lista esta vacia\n";
        cin.get();
        exit(-1);
    }
    return valEliminado;
}

bool Lista ::listaVacia(void) { return Inicio == NULL; }

void Lista ::mostrarLista(void) {
    Nodo *aux = Inicio;
    cout << "Siguiente\tValor\n";
    cout << "---------\t-----\n";
    while(aux) {
        cout << aux->obtenerSiguiente() << "\t" << aux->obtenerValor() << "\n";
        aux = aux->obtenerSiguiente();
    }
}

bool Lista ::existeVal(int val) {
    Nodo *aux = Inicio;
    while(aux) {
        if(aux->obtenerValor() == val) {
            return true;
        }
    }
    return false;
}

Lista ::~Lista() { cout << "[!] Eliminando lista...\n"; }