#include <iostream>
#include <cstdlib>

#include "../include/cola.h"

using namespace std;

int main(void)
{
    char res;
    int op;
    do
    {
        system("clear");
        do
        {
            system("clear");
            Cola obj;
            cout << "-->\tPROGRAMA DE COLAS\t<--"
                 << "\n";
            cout << "\n";
            cout << "1) Agregar"
                 << "\n";
            cout << "2) Borrar"
                 << "\n";
            cout << "3) Mostrar"
                 << "\n";
            cout << "4) Decrementar"
                 << "\n";
            cout << "5) Tamano"
                 << "\n";
            cout << "6) Mostrar indices pares"
                 << "\n";
            cout << "7) Mostrar indices impares"
                 << "\n";
            cout << "8) Mostrar indices multiplos de X"
                 << "\n";
            cout << "9) Contar indices multiplos de X"
                 << "\n";
            cout << "0) Salir"
                 << "\n\n";
            cout << "Seleccione una opcion: ";
            cin >> op;
            switch (op)
            {
                case 0:
                {
                    obj.~Cola();
                    cin.get();
                    break;
                }
                case 1:
                {
                    int num;
                    cout << "\nIngrese el numero de nodos: ";
                    cin >> num;
                    cout << "\n";
                    for (int i = 0; i < num; i++)
                    {
                        int val;
                        cout << "Ingrese el valor del nodo[" << i + 1 << "]: ";
                        cin >> val;
                        obj.insertar(val);
                    }
                    cin.get();
                    break;
                }
                case 2:
                {
                    cout << "Se borro el ultimo nodo con el valor de: " << obj.elimina() << "\n";
                    cin.get();
                    break;
                }
                case 3:
                {
                    cout << "Contenido de la cola:\n\n";
                    obj.mostrarCola();
                    cin.get();
                    break;
                }
                case 4:
                {
                    obj.decrementar();
                    cout << "Se decrementaron los valores de la cola\n\n";
                    cin.get();
                    break;
                }
                case 5:
                {
                    cout << "La pila tiene un tamano de " << obj.tam() << "\n";
                    cin.get();
                    break;
                }
                case 6:
                {
                    cout << "Los valores de los indices pares de la cola son:\n\n";
                    obj.mostrarParesCola();
                    cin.get();
                    break;
                }
                case 7:
                {
                    cout << "Los valores de los indices impares de la cola son:\n\n";
                    obj.mostrarImparesCola();
                    cin.get();
                    break;
                }
                case 8:
                {
                    int m;
                    cout << "Ingrese el multiplo: ";
                    cin >> m;
                    obj.mostrarMultiplos(m);
                    cin.get();
                    break;
                }
                case 9:
                {
                    int m;
                    cout << "Ingrese el multiplo: ";
                    cin >> m;
                    obj.contMultiplos(m);
                    cin.get();
                    break;
                }
                default:
                {
                    cout << "\nOpcion invalida\n";
                }
            }
            cin.get();
        } while (op); // del menu
        cout << "\n\n¿Deseas ejecutar nuevamente el programa? s/n " << endl;
        cin >> res;
        res = tolower(res);
    } while (res == 's');

    return 0;
}
