#include <iostream>

void memoryLeak() {
    int* p = new int[10]; // Reserva memoria para un array de 10 enteros
    // Se olvida liberar la memoria usando delete[]
}

int main() {
    memoryLeak();
    // La memoria reservada en memoryLeak nunca se libera
    return 0;
}
