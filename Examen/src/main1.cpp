#include <cstdlib>
#include <iostream>

#include "../include/cola.h"

using namespace std;

int main(void) {
    Cola cola1, cola2, cola3;
    char res;
    int op;
    do {
        system("clear");
        int tam;
        cout << "Ingrese el tamano de las colas iniciales: ";
        cin >> tam;
        for (int i = 0; i < tam; i++) {
            int buff;
            cout << "Ingrese el valor del nodo[" << i + 1 << "] de cola[1]: ";
            cin >> buff;
            cola1.agregar(buff);
            cout << "Ingrese el valor del nodo[" << i + 1 << "] de cola[2]: ";
            cin >> buff;
            cola2.agregar(buff);
        }

        cout << "\nContenido de la cola[1]:\n";
        cola1.mostrarCola();
        cout << "\nContenido de la cola[2]:\n";
        cola2.mostrarCola();

        cout << "\nRestando cola[1] a cola[2] para obtener cola[3]\n";
        for (int i = 0; i < tam; i++) {
            cola3.agregar(cola2.eliminar() - cola1.eliminar());
        }
        cout << "\nContenido de la cola[3]:\n";
        cola3.mostrarCola();

        cout << "\n\n¿Deseas ejecutar nuevamente el programa?(s/n): ";
        cin >> res;
        res = tolower(res);
    } while (res == 's');
    return 0;
}