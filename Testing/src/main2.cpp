/*
    1)  Llenar 2 pilas de tamaño n.
    2)  Vaciar ambas pilas y crear una tercera.
    3)  Al vaciar cada pila ir sumando los valores para crear la tercera pila del mismo tamaño.

    P1 = 1, 2, 3, 4
    P2 = 4, 5, 8, 1
    P3 = P1 + P2
*/

#include "../include/pila.h"

#include <iostream>

using namespace std;

int main(void) {
    char res;
    do{
        system("clear");
        int i, n=10;
        Pila p1, p2, p3;
        for(int i=1; i<=n;i++){
            p1.push(i);
            p2.push(i+10);
        }
        
        cout << "El contenido de las pilas es:\n";
        cout << "\nPila 1\n";
        p1.mostrarPila(); 
        cout << "\nPila 2\n";
        p2.mostrarPila(); 
        
        for(int i=1; i<=n;i++){
            p3.push(p1.pop()+p2.pop());
        }
        cout << "\nPila 3\n";
        p3.mostrarPila(); 
        
        cout << "\n\nDesea ejecutar nuevamente el programa (s/n)? ";
        cin >> res;
        res = tolower(res);
    } while(res=='s');
    return 0;
}
