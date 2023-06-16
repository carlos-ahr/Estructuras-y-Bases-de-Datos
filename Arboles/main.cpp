#include <iostream>
using namespace std;
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

Nodo::Nodo(long dato, Nodo *izquierdo, Nodo *derecho) {
    this->dato = dato;
    this->izquierdo = izquierdo;
    this->derecho = derecho;
}

Nodo *&Nodo::obtenerDerecho(void) { return derecho; }
Nodo *&Nodo::obtenerIzquierdo(void) { return izquierdo; }
long Nodo::obtenerDato(void) { return dato; }
void Nodo::modificarDato(long dato) { this->dato = dato; }
void Nodo::modificarIzquierdo(Nodo *izquierdo) { this->izquierdo = izquierdo; }
void Nodo::modificarDerecho(Nodo *derecho) { this->derecho = derecho; }
void Nodo::mostrarDatos(void) {
    if (!izquierdo)
        cout << "NULL";
    else
        cout << izquierdo;
    cout << " <- " << dato << " -> ";
    if (!derecho)
        cout << "NULL";
    else
        cout << derecho;
    cout << endl;
}

class ArbolBB {
   public:
    ArbolBB();
    ~ArbolBB();
    void insertarNodo(long d);
    void preOrden(void);
    void postOrden(void);
    void entreOrden(void);

   private:
    Nodo *raiz;
    Nodo *actual;
    void poda(Nodo *&);
    void preOrden(Nodo *);
    void postOrden(Nodo *);
    void entreOrden(Nodo *);
    void insertarNodo(long d, Nodo *&);
};
ArbolBB::ArbolBB() {
    raiz = NULL;
    actual = NULL;
}

ArbolBB::~ArbolBB() { poda(raiz); }

void ArbolBB::insertarNodo(long d) { insertarNodo(d, raiz); }
void ArbolBB::preOrden(void) {
    actual = raiz;
    preOrden(actual);
}
void ArbolBB::postOrden(void) {
    actual = raiz;
    postOrden(actual);
}
void ArbolBB::entreOrden(void) {
    actual = raiz;
    entreOrden(actual);
}
void ArbolBB::insertarNodo(long d, Nodo *&raiz) {
    Nodo *aux = raiz;
    if (aux == NULL) {
        raiz = new Nodo(d);
    } else {
        if (d <= aux->obtenerDato()) {
            insertarNodo(d, aux->obtenerIzquierdo());
        } else {
            insertarNodo(d, aux->obtenerDerecho());
        }
    }
}
void ArbolBB::poda(Nodo *&aux) {
    if (aux) {
        poda(aux->obtenerIzquierdo());
        poda(aux->obtenerDerecho());
        delete (aux);
        aux = NULL;
    }
}
void ArbolBB::preOrden(Nodo *aux)  // prefijo
{
    if (aux) {
        cout << aux->obtenerDato() << endl;
        preOrden(aux->obtenerIzquierdo());
        preOrden(aux->obtenerDerecho());
    }
}
void ArbolBB::postOrden(Nodo *aux)  // postfijo
{
    if (aux) {
        postOrden(aux->obtenerIzquierdo());
        postOrden(aux->obtenerDerecho());
        cout << aux->obtenerDato() << endl;
    }
}
void ArbolBB::entreOrden(Nodo *aux)  // infijo
{
    if (aux) {
        postOrden(aux->obtenerIzquierdo());
        cout << aux->obtenerDato() << endl;
        postOrden(aux->obtenerDerecho());
    }
}

int main(void) {
    ArbolBB A;
    A.insertarNodo(531);
    A.insertarNodo(580);
    A.insertarNodo(540);
    A.insertarNodo(530);
    A.insertarNodo(535);
    A.insertarNodo(520);
    A.insertarNodo(525);
    A.insertarNodo(518);
    A.insertarNodo(502);
    A.insertarNodo(100);

    cout << "\nA en entreorden:" << endl;
    A.entreOrden();
    cout << endl << endl;
    cout << "\nA en Postorden:" << endl;
    A.postOrden();
    cout << endl << endl;
    cout << "\nA en Preorden:" << endl;
    A.preOrden();
    cin.get();
    return 0;
}
