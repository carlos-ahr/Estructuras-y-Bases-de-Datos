#include "../include/pila.h"

#include<iostream>
#include<cstdlib>

using namespace std;

int main(void) {
    Pila obj;
    char res;
    int op;
    do {
        system("clear");
        do {
            system("clear");
            cout << "-->\tMENU DE PILAS\t<--\n";
            cout << "1) Agregar elementos\n";
            cout << "2) Eliminar elemento\n";
            cout << "3) Mostrar cola\n";
            cout << "4) Tamano de la cola\n";
            cout << "5) Mostrar valores pares\n";
            cout << "6) Mostrar valores impares\n";
            cout << "7) Mostrar valores multiplos\n";
            cout << "8) Contar valores multiplos\n";
            cout << "9) Contar valores negativos\n";
            cout << "0) Salir del menu \n";
            cout << "\n\nElige una opcion: ";
            cin >> op;
            switch (op) {
                case 0:
                    break;
                case 1: {
                    int num;
                    cout << "\nIngrese el numero de nodos: ";
                    cin >> num;
                    for (int i = 0; i < num; i++)
                    {
                        int val;
                        cout << "Ingrese el valor del nodo [" << i + 1 << "]: ";
                        cin >> val;
                        obj.push(val);
                    }
                    cin.get();
                    break;
                }
                case 2: {
                    cout << "\nSe elimino el nodo con el valor [" << obj.pop() << "]\n";
                    cin.get();
                    break;
                }
                case 3: {
                    cout << "Contenido de la pila:\n\n";
                    obj.mostrarPila();
                    cin.get();
                    break;
                }
                case 4: {
                    cout << "\nLa pila tiene un tamano de " << obj.tam() << " nodos.";
                    cin.get();
                    break;
                }
                case 5: {
                    cout << "\nContenidos pares de la pila:\n\n";
                    obj.mostrarParesPila();
                    cin.get();
                    break;
                }
                case 6: {
                    cout << "\nContenidos impares de la pila:\n\n";
                    obj.mostrarImparesPila();
                    cin.get();
                    break;
                }
                case 7: {
                    int mul;
                    cout << "Ingrese el multiplo: ";
                    cin >> mul;
                    cout << "\nContenidos multiplos de " << mul << " de la pila:\n\n";
                    obj.mostrarMultiplos(mul);
                    cin.get();
                    break;
                }
                case 8: {
                    int mul;
                    cout << "Ingrese el multiplo: ";
                    cin >> mul;
                    cout << "\nLa pila contiene " << obj.contMultiplos(mul) << " multiplos de " << mul << ".\n";
                    cin.get();
                    break;
                }
                case 9: {
                    cout << "La pila contiene " << obj.contValoresNegativos() << " valores negativos.\n";
                    cin.get();
                    break;
                    break;
                }
                default:
                    cout << "\nOpcion invalida, seleccione otra\n";
            }
            cin.get();
        } while (op);
        cout << "\n\n¿Deseas ejecutar nuevamente el programa?(s/n): ";
        cin >> res;
        res = tolower(res);
    } while (res == 's');
    return 0;
}