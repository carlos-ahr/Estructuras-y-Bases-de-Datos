#include "../include/lista.h"

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int op;
    char res;
    do {
        Lista L1;
        system("clear");
        do {
            cout << "--> MENU DE LISTAS <--\n\n";
            cout << "[1] Insertar nodo\n";
            cout << "[2] Eliminar nodo\n";
            cout << "[3] Mostrar contenido de lista\n";
            cout << "[0] Salir\n";
            cout << "\nElija una opcion: ";
            cin >> op;
            switch (op){
                case 1: {
                    int val;
                    cout << "[*] Ingrese el valor del nodo que desea agregar: ";
                    cin >> val;
                    L1.insertar(val);
                    cout << "[+] Nodo agregado\n";
                    break;
                }
                case 2: {
                    int val;
                    if(L1.listaVacia()) {
                        cout << "[x] Lista vacia, no hay nodos para eliminar.\n";
                    }
                    else{
                        cout << "[*] Ingrese el valor que desea borrar: ";
                        cin >> val;
                        if(L1.eliminar(val)<0){
                            cout << "[x] No existe el numero {" << val << "} en la lista.\n";
                        }
                        else {
                            cout << "[-] Se borro el nodo con el valor {" << val << "}.\n";
                        }
                    }
                    break;
                }
                case 3: {
                    cout << "[*] Contenido de la lista:\n";
                    L1.mostrarLista();
                    break;
                }
                case 4: {
                    break;
                }
                default: {
                    cout << "[x] Opcion invalida, elija otra.\n";
                    break;
                }
            }
        } while(op != 0);
    } while(res == 's');
    cin.get();
    return 0;
}