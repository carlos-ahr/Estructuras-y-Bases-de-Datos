#include <iostream>
#include <cstdlib>

int fact(int num) {
    if (num <= 0) {
        return 1;
    } else {
        return num * fact(num - 1);
    }
}

int fibonacci(){}

/* int main(void) {
    char res;
    do{
        system("clear");
        int num;
        std::cout << "Ingrese el numero del que desea el factorial: ";
        std::cin >> num;
        std::cout << "El factorial de " << num << " es: " << fact(num) << std::endl;
        std::cout << "Desea ejecutar el codigo de nuevo? (s/n): ";
        std::cin >> res;
        res = tolower(res);
    } while(res == 's');
    return 0;
} */

int main(void) {
    char res;
    do{
        system("clear");

        res = tolower(res);
    } while(res == 's');
    return 0;
}