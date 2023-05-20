#include <cstdlib>
#include <iostream>

#include "../include/ListaDoble.h"

using namespace std;

int main(void) {
    ListaDoble obj;
    char res;
    int op;
    do {
        system("clear");
        do {
            system("clear");
            cout << "-->\tMENU DE ListaDobleS\t<--\n";
            cout << "1) Agregar elementos\n";
            cout << "2) Eliminar elemento\n";
            cout << "3) Decrementar valores de la ListaDoble\n";
            cout << "4) Mostrar ListaDoble\n";
            cout << "5) Tamano de la ListaDoble\n";
            cout << "6) Mostrar valores pares\n";
            cout << "7) Mostrar valores impares\n";
            cout << "8) Mostrar valores multiplos\n";
            cout << "9) Contar valores multiplos\n";
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
                        obj.agregar(val);
                    }
                    cin.get();
                    break;
                }
                case 2: {
                    cout << "\nSe elimino el nodo con el valor [" << obj.eliminar() << "]\n";
                    cin.get();
                    break;
                }
                case 3: {
                    obj.decrementarValores();
                    cout << "\nSe decrementaron los valores de la ListaDoble\n\n";
                    obj.mostrarListaDoble();
                    cin.get();
                    break;
                }
                case 4: {
                    cout << "Contenido de la ListaDoble:\n\n";
                    obj.mostrarListaDoble();
                    cin.get();
                    break;
                }
                case 5: {
                    cout << "\nLa ListaDoble tiene un tamano de " << obj.tam() << " nodos.";
                    cin.get();
                    break;
                }
                case 6: {
                    cout << "\nContenidos pares de la ListaDoble:\n\n";
                    obj.mostrarPares();
                    cin.get();
                    break;
                }
                case 7: {
                    cout << "\nContenidos impares de la ListaDoble:\n\n";
                    obj.mostrarImpares();
                    cin.get();
                    break;
                }
                case 8: {
                    int mul;
                    cout << "Ingrese el multiplo: ";
                    cin >> mul;
                    cout << "\nContenidos multiplos de " << mul << " de la ListaDoble:\n\n";
                    obj.mostrarMultiplos(mul);
                    cin.get();
                    break;
                }
                case 9: {
                    int mul;
                    cout << "Ingrese el multiplo: ";
                    cin >> mul;
                    cout << "\nLa ListaDoble contiene " << obj.contarMultiplos(mul) << " multiplos de " << mul << ".\n";
                    cin.get();
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