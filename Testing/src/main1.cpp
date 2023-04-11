#include "../include/pila.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int menu(void) {
    system("clear");
    int op;
    cout << "-->\tPROGRAMA DE PILAS\t<--" << endl;
    cout << endl;
    cout << "1) Agregar nodos" << endl;
    cout << "2) Borrar ultimo nodo" << endl;
    cout << "3) Mostrar tamano" << endl;
    cout << "4) Mostrar pila" << endl;
    cout << "5) Mostrar nodos impares de la pila" << endl;
    cout << "6) Mostrar nodos pares de la pila" << endl;
    cout << "7) Mostrar multiplos de un valor" << endl;
    cout << "8) Contar multiplos de un valor" << endl;
    cout << "9) Calcular promedio" << endl;
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
                op = menu();
                break;
            case 2:
                cout << "Se borro el ultimo nodo con el valor: " << obj.pop() << endl;
                cout << endl;
                op = menu();
                break;
            case 3:
                cout << "La pila tiene un tamano de [" << obj.tam()
                    << "] nodos" << endl;
                cout << endl;
                op = menu();
                break;
            case 4:
                cout << "Contenido de la pila:" << endl;
                cout << endl;
                cout << "Direccion\tValor" << endl;
                cout << "---------\t-----" << endl;
                obj.mostrarPila();
                cout << endl;
                op = menu();
                break;
            case 5:
                cout << "Contenido de los impares de la pila:" << endl;
                cout << endl;
                cout << "Direccion\tValor" << endl;
                cout << "---------\t-----" << endl;
                obj.mostrarImparesPila();
                cout << endl;
                op = menu();
                break;
            case 6:
                cout << "Contenido de los pares de la pila:" << endl;
                cout << endl;
                cout << "Direccion\tValor" << endl;
                cout << "---------\t-----" << endl;
                obj.mostrarParesPila();
                cout << endl;
                op = menu();
                break;
            case 7:
                int val1;
                cout << "Ingrese el numero del que desea mostrar sus multiplos: ",
                    cin >> val1;
                cout << "Direccion\tValor" << endl;
                cout << "---------\t-----" << endl;
                obj.mostrarMultiplos(val1);
                cout << endl;
                op = menu();
                break;
            case 8:
                int val2;
                cout << "Ingrese el numero del que desea contar sus multiplos: ",
                    cin >> val2;
                cout << "Direccion\tValor" << endl;
                cout << "---------\t-----" << endl;
                obj.contMultiplos(val2);
                cout << endl;
                op = menu();
                break;
                case 9:
                cout << "Valor promedio de los datos de la pila:" << obj.calcPromedio() << endl;
                cout << endl;
                op = menu();
                break;
            default:
                cout << "Opcion invalida";
                cout << endl;
                op = menu();
                break;
            }
        } while (op);
        cin.get();
        system("clear");
        cout << "Desea ejecutar de nuevo el codigo? (s/n): ";
        cin >> res;
        res = tolower(res);
    } while (res == 's');
    cout << endl;
    return 0;
}