#include "pausa.h"
#include <iostream>

namespace pausa{
    void pausa(void) {
        std::cout<<"Presione cualquier tecla para continuar...";
        std::cin.get();
    }
}