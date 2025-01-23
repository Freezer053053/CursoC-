#include <iostream>

void recursiveFunction() {
    int array[1000000]; // Esto usa una gran cantidad de memoria de la pila
    std::cout << "Llamando a la función recursiva" << std::endl;
    recursiveFunction(); // Llamada recursiva
}

int main() {
    recursiveFunction();
    return 0;
}