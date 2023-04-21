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
            cout << "-->\tPROGRAMA DE COLAS\t<--" << "\n";
            cout << "\n";
            cout << "1) Agregar" << "\n";
            cout << "2) Borrar"<< "\n";
            cout << "3) Mostrar" << "\n";
            cout << "4) Decrementar" << "\n";
            cout << "5) Tamano" << "\n";
            cout << "6) Mostrar indices pares" << "\n";
            cout << "7) Mostrar indices impares" << "\n";
            cout << "8) Mostrar indices multiplos de X" << "\n";
            cout << "9) Contar indices multiplos de X" << "\n";
            cout << "0) Salir" << "\n";
            cout << "\n";
            cout << "Seleccione una opcion: ";
            cin >> op;
            switch (op)
            {
            case 0:
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            default:
                cout << "\nOpcion invalida" << endl;
            }
            cin.get();
        } while (op); // del menu

        cout << "\n\n¿Deseas ejecutar nuevamente el programa? s/n " << endl;
        cin >> res;
        res = tolower(res);
    } while (res == 's');

    return 0;
}
