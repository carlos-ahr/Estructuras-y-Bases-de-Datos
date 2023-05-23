#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    // Variable de tipo caracter para manejo del bucle
    char res;
    // Abrir archivo en modo escritura:
    ofstream archivo("archivo.txt");
    // Variable de tipo cadena de caracteres utilizadacomo buffer
    string buff;
    do {
        // Limpiando pantalla
        system("clear");
        cin.get();
        // Pidiendo informacion a agregar:
        cout << "Ingrese lo que desea agregar al archivo: ";
        getline(cin, buff);
        // Escribiendo informacion en el archivo:
        archivo << buff << endl;
        // Reiniciando bucle:
        cout << "\nDesea ejecutar el programa de nuevo? (s/n): ";
        cin >> res;
        res = tolower(res);
    } while (res == 's');
}