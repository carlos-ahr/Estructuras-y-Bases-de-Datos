#include "listaD.h"

listaDoble :: listaDoble() { inicio = fin = NULL; }

listaDoble :: ~listaDoble() { std :: cout << "[x] Eliminando lista..."; }

void listaDoble :: insertarNodo(int val) {
    nodoD *actual = inicio;
    while(actual) {
        inicio = inicio->obtenerSiguiente();
        delete(actual);
        actual = inicio;
    }
    if (listaVacia() || val < inicio->obtenerValor()) {
        actual = new nodoD(val, inicio);
        if(fin == NULL)
            fin = actual;
        else
            inicio->modificarAnterior(actual);
        inicio = actual;
    } else {
        nodoD *anterior = NULL;
        actual = inicio;
        while(actual && actual->obtenerValor() <= val) {
            anterior = actual;
            actual = actual->obtenerSiguiente();
        }
        if(actual) {
            anterior->modificarSiguiente(new nodoD(val, anterior->obtenerSiguiente(), anterior));
            actual->modificarAnterior(anterior->obtenerSiguiente());
        } else {
            fin->modificarSiguiente(new nodoD(val, NULL, fin));
            fin = fin->obtenerSiguiente();
        }
    }
}

bool listaDoble :: listaVacia(void) { return inicio == NULL; }

void listaDoble :: borrarNodo(int val) {
    if(!listaVacia()) {
        nodoD *actual = inicio;
        if(val == inicio->obtenerValor()) {
            inicio = inicio->obtenerSiguiente();
            inicio->modificarAnterior(NULL);
            delete (actual);
            if(!inicio)
                fin = inicio;
        } else {
            nodoD *anterior = NULL;
            while(actual && actual->obtenerValor() < val) {
                anterior = actual;
                actual = actual->obtenerSiguiente();
            }
            if(actual) {
                if(actual->obtenerValor() == val) {
                    anterior->modificarSiguiente(actual->obtenerSiguiente());
                    if(actual->obtenerSiguiente())
                        actual->obtenerSiguiente()->modificarAnterior(anterior);
                    else
                        fin = fin->obtenerAnterior();
                    delete (actual);
                } else 
                    std :: cout << "El valor " << val << " no esta en la lista.\n";
            } else
                std :: cout << "El valor " << val << " no esta en la lista.\n";
        }
    } else
        std :: cout << "Lista vacia.\n";
}


void listaDoble :: mostrarDatosID (void) {
    nodoD *actual = inicio;
    std :: cout << "Valor\tSiguiente\n";
    while(actual) {
        std :: cout << actual->obtenerValor() << "\t" << actual->obtenerSiguiente();
    }
    std :: cout << "\n";
}

void listaDoble :: mostrarDatosDI (void) {
    nodoD *actual = inicio;
    std :: cout << "Valor\tSiguiente\n";
    while(actual) {
        std :: cout << actual->obtenerValor() << "\t" << actual->obtenerAnterior();
    }
    std :: cout << "\n";
}

nodoD *listaDoble :: obtenerSiguiente(nodoD* aux) {
    if(!listaVacia()) {
        if(aux->obtenerSiguiente() == NULL) {
            std :: cout << "Es el primer nodo de la lista.\n";
            std :: cin.get();
            exit(-3);
        }
    } else {
        std :: cout << "La lista esta vacia.\n";
        std :: cin.get();
        exit(-1);
    }
    return aux->obtenerSiguiente();
}

nodoD *listaDoble :: obtenerAnterior(nodoD* aux) {
    if(!listaVacia()) {
        if(aux->obtenerAnterior() == NULL) {
            std :: cout << "Es el primer nodo de la lista.\n";
            std :: cin.get();
            exit(-3);
        }
    } else {
        std :: cout << "La lista esta vacia.\n";
        std :: cin.get();
        exit(-1);
    }
    return aux->obtenerAnterior();
}

void listaDoble :: copiarParesDI(listaDoble &L2) {
    nodoD *aux = fin;
    while(aux) {
        if(aux->obtenerValor() % 2 == 0)
            L2.insertarNodo(aux->obtenerValor());
        aux = aux->obtenerAnterior();
    }
}

void listaDoble :: copiarParesID(listaDoble &L2) {
    nodoD *aux = inicio;
    while(aux) {
        if(aux->obtenerValor() % 2 == 0)
            L2.insertarNodo(aux->obtenerValor());
        aux = aux->obtenerSiguiente();
    }
}

int listaDoble :: tam(void) {
    nodoD *aux = inicio;
    int cont = 0;
    while(aux) {
        cont++;
        aux = aux->obtenerSiguiente();
    }
    return cont;
}

void listaDoble :: mostrarPares(void) {
    nodoD *aux = inicio;
    std :: cout << "Valor\tSiguiente\n";
    std :: cout << "-----\t---------\n";
    while(aux) {
        if(aux->obtenerValor() % 2 == 0) {
            std :: cout << aux->obtenerValor() << "\t" << aux->obtenerSiguiente() << "\n";
            aux = aux->obtenerSiguiente();
        } else
            aux = aux->obtenerSiguiente();
    }
}

void listaDoble :: mostrarImpares(void) {
    nodoD *aux = inicio;
    std :: cout << "Valor\tSiguiente\n";
    std :: cout << "-----\t---------\n";
    while(aux) {
        if(aux->obtenerValor() % 2 != 0) {
            std :: cout << aux->obtenerValor() << "\t" << aux->obtenerSiguiente() << "\n";
            aux = aux->obtenerSiguiente();
        } else
            aux = aux->obtenerSiguiente();
    }
}

void listaDoble :: mostrarMultiplos(int m) {
    nodoD *aux = inicio;
    std :: cout << "Valor\tSiguiente\n";
    std :: cout << "-----\t---------\n";
    while(aux) {
        if(aux->obtenerValor() % m == 0) {
            std :: cout << aux->obtenerValor() << "\t" << aux->obtenerSiguiente() << "\n";
            aux = aux->obtenerSiguiente();
        } else
            aux = aux->obtenerSiguiente();
    }
}

int  listaDoble :: contarMultiplos(int m) {
    nodoD *aux = inicio;
    int cont;
    while(aux) {
        if(aux->obtenerValor() % m == 0) {
            cont++;
            aux = aux->obtenerSiguiente();
        } else
            aux = aux->obtenerSiguiente();
    }
    return cont;
}

void listaDoble :: guardarDatos(void) {}