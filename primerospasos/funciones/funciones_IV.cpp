#include <iostream>
using namespace std;

// función para sumar dos números enteros
int sumar(int a, int b) {
    return a + b;
}

// función para sumar tres números enteros
int sumar(int a, int b, int c) {
    return a + b + c;
}

// función para sumar dos números flotantes
float sumar(float a, float b) {
    return a + b;
}

int main() {
    cout << sumar(3, 4) << endl;        // Llama a la primera función
    cout << sumar(3, 4, 5) << endl;     // Llama a la segunda función
    cout << sumar(3.0f, 4.5f) << endl;  // Llama a la tercera función
    return 0;
}
