#include <stdlib.h>

#include <iostream>

using namespace std;

class Nodo {
    int dato;
    Nodo* siguiente;

public:
    Nodo(int v, Nodo* s);
    int obtenerValor(void);
    Nodo* obtenerSiguiente(void);
    void cambiarValor(int);
    void cambiarSiguiente(Nodo*);
    ~Nodo();
};

class Pila {
    Nodo* tope;

public:
    Pila(void);
    bool pilaVacia(void);
    void push(int);
    int pop(void);
    int tamano(void);
    void mostrarPila(void);
    void mostrarImparesPila(void);
    void mostrarParesPila(void);
    ~Pila();
};

Nodo::Nodo(int v = 0, Nodo* s = NULL) {
    dato = v;
    siguiente = s;
}

int Nodo::obtenerValor(void) { return dato; }

Nodo* Nodo::obtenerSiguiente(void) { return siguiente; }

void Nodo::cambiarValor(int v) { dato = v; }

void Nodo::cambiarSiguiente(Nodo* s) { siguiente = s; }

Nodo ::~Nodo() { cout << "Eliminando nodo" << endl; }

Pila::Pila() { tope = NULL; }

bool Pila::pilaVacia() { return tope == NULL; }

void Pila::push(int d) { tope = new Nodo(d, tope); }

int Pila::pop(void) {
    Nodo* aux;
    int d;
    if (!pilaVacia()) {
        aux = tope;
        d = aux->obtenerValor();
        tope = aux->obtenerSiguiente();
        delete aux;
    }
    else {
        cout << "Pila vacia" << endl;
        exit(-1);
    }
    return d;
}

int Pila::tamano(void) {
    int cont = 0;
    Nodo* aux = tope;
    while (aux) {
        aux = aux->obtenerSiguiente();
        cont++;
    }
    return cont;
}

void Pila::mostrarPila(void) {
    Nodo* aux = tope;
    while (aux) {
        cout << aux << "\t" << aux->obtenerValor() << endl;
        aux = aux->obtenerSiguiente();
    }
}

void Pila::mostrarImparesPila(void) {
    Nodo* aux = tope;
    int cont = 0;
    while (aux) {
        if (cont % 2 != 0) {
            cout << aux << "\t" << aux->obtenerValor() << endl;
            aux = aux->obtenerSiguiente();
            cont++;

        }
        else {
            aux = aux->obtenerSiguiente();
            cont++;
        }
    }
}

void Pila::mostrarParesPila(void) {
    Nodo* aux = tope;
    int cont = 0;
    while (aux) {
        if (cont % 2 == 0) {
            cout << aux << "\t" << aux->obtenerValor() << endl;
            aux = aux->obtenerSiguiente();
            cont++;

        }
        else {
            aux = aux->obtenerSiguiente();
            cont++;
        }
    }
}

Pila ::~Pila() {
    while (!pilaVacia()) {
        cout << endl;
        cout << "Se ha eliminado el nodo con el valor: " << pop() << endl;
    }
    cout << endl;
}

int menu(void) {
    system("cls");
    int op;
    cout << "-->\tPROGRAMA DE PILAS\t<--" << endl;
    cout << endl;
    cout << "1) Agregar nodos" << endl;
    cout << "2) Borrar ultimo nodo" << endl;
    cout << "3) Mostrar tamano" << endl;
    cout << "4) Mostrar pila" << endl;
    cout << "5) Mostrar nodos impares de la pila" << endl;
    cout << "6) Mostrar nodos pares de la pila" << endl;
    cout << "0) Salir" << endl;
    cout << endl;
    cout << "Seleccione una opcion: ";
    cin >> op;
    cout << endl;
    return op;
}

int main(void) {
    Pila obj;
    char res;
    do {
        int op = menu();
        do {
            switch (op) {
            case 0:
                obj.~Pila();
                break;
            case 1:
                int num;
                cout << "Ingrese el numero de nodos: ";
                cin >> num;
                cout << endl;
                for (int i = 0; i < num; i++) {
                    int val;
                    cout << "Ingrese el valor del nodo[" << i + 1 << "]: ";
                    cin >> val;
                    obj.push(val);
                }
                cout << endl;
                system("pause");
                op = menu();
                break;
            case 2:
                cout << "Se borro el ultimo nodo con el valor: " << obj.pop() << endl;
                cout << endl;
                system("pause");
                op = menu();
                break;
            case 3:
                cout << "La pila tiene un tamano de [" << obj.tamano()
                    << "] nodos" << endl;
                cout << endl;
                system("pause");
                op = menu();
                break;
            case 4:
                cout << "Contenido de la pila:" << endl;
                cout << endl;
                cout << "Direccion\tValor" << endl;
                cout << "---------\t-----" << endl;
                obj.mostrarPila();
                cout << endl;
                system("pause");
                op = menu();
                break;
            case 5:
                cout << "Contenido de los impares de la pila:" << endl;
                cout << endl;
                cout << "Direccion\tValor" << endl;
                cout << "---------\t-----" << endl;
                obj.mostrarImparesPila();
                cout << endl;
                system("pause");
                op = menu();
                break;
            case 6:
                cout << "Contenido de los pares de la pila:" << endl;
                cout << endl;
                cout << "Direccion\tValor" << endl;
                cout << "---------\t-----" << endl;
                obj.mostrarParesPila();
                cout << endl;
                system("pause");
                op = menu();
                break;
            default:
                cout << "Opcion invalida";
                system("pause");
                cout << endl;
                op = menu();
                break;
            }
        } while (op);
        system("pause");
        system("cls");
        cout << "Desea ejecutar de nuevo el codigo? (s/n): ";
        cin >> res;
        res = tolower(res);
    } while (res == 's');
    cout << endl;
    return 0;
}