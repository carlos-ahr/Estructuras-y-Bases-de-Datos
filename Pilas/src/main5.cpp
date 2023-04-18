#include "../include/pila.h"
#include <iostream>

using namespace std;

int main(void)
{
    char res;
    do
    {
        system("clear");
        
        cout << "\n\nDesea ejecutar nuevamente el programa (s/n)? ";
        cin >> res;
        res = tolower(res);
    } while (res == 's');
    return 0;
}