#include <cstdlib>
#include <iostream>

#include "../include/pila.h"

using namespace std;

int menu(void) {
    system("clear");
    int res;
    cout << "-->\tPROGRAMA DE PILAS\t<--"
         << "\n";
    cout << "\n";
    cout << "1) Agregar nodos"
         << "\n";
    cout << "2) Borrar ultimo nodo"
         << "\n";
    cout << "3) Mostrar tamano"
         << "\n";
    cout << "4) Mostrar pila"
         << "\n";
    cout << "5) Mostrar nodos impares de la pila"
         << "\n";
    cout << "6) Mostrar nodos pares de la pila"
         << "\n";
    cout << "7) Mostrar multiplos de un valor"
         << "\n";
    cout << "8) Contar multiplos de un valor"
         << "\n";
    cout << "9) Calcular promedio"
         << "\n";
    cout << "0) Salir"
         << "\n";
    cout << "\n";
    cout << "Seleccione una opcion: ";
    cin >> res;
    return res;
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
                    cout << "\n";
                    for (int i = 0; i < num; i++) {
                        int val;
                        cout << "Ingrese el valor del nodo[" << i + 1 << "]: ";
                        cin >> val;
                        obj.push(val);
                    }
                    cin.get();
                    cin.get();
                    op = menu();
                    cout << "\n";
                    break;
                case 2:
                    cout << "Se borro el ultimo nodo con el valor: "
                         << obj.pop() << "\n";
                    cin.get();
                    cin.get();
                    op = menu();
                    break;
                case 3:
                    cout << "La pila tiene un tamano de [" << obj.tam()
                         << "] nodos"
                         << "\n";
                    cout << "\n";
                    cin.get();
                    cin.get();
                    op = menu();
                    break;
                case 4:
                    cout << "Contenido de la pila:"
                         << "\n";
                    cout << "\n";
                    obj.mostrarPila();
                    cout << "\n";
                    cin.get();
                    cin.get();
                    op = menu();
                    break;
                case 5:
                    cout << "Contenido de los impares de la pila:"
                         << "\n";
                    cout << "\n";
                    obj.mostrarImparesPila();
                    cout << "\n";
                    cin.get();
                    cin.get();
                    op = menu();
                    break;
                case 6:
                    cout << "Contenido de los pares de la pila:"
                         << "\n";
                    cout << "\n";
                    obj.mostrarParesPila();
                    cout << "\n";
                    cin.get();
                    cin.get();
                    op = menu();
                    break;
                case 7:
                    int val1;
                    cout << "Ingrese el numero del que desea mostrar sus "
                            "multiplos: ",
                        cin >> val1;
                    obj.mostrarMultiplos(val1);
                    cout << "\n";
                    cin.get();
                    cin.get();
                    op = menu();
                    break;
                case 8:
                    int val2;
                    cout << "Ingrese el numero del que desea contar sus "
                            "multiplos: ",
                        cin >> val2;
                    obj.contMultiplos(val2);
                    cout << "\n";
                    cin.get();
                    cin.get();
                    op = menu();
                    break;
                case 9:
                    cout << "Valor promedio de los datos de la pila:"
                         << obj.calcPromedio() << "\n";
                    cout << "\n";
                    cin.get();
                    cin.get();
                    op = menu();
                    break;
                default:
                    cout << "Opcion invalida";
                    cout << "\n";
                    cin.get();
                    cin.get();
                    op = menu();
                    break;
            }
        } while (op == 's');
        system("clear");
        cout << "Desea ejecutar de nuevo el codigo? (s/n): ";
        cin >> res;
        res = tolower(res);
    } while (res == 's');
    cout << "\n";
    return 0;
}
