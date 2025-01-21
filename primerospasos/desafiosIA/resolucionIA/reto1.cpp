#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero < 2) return false;
    for (int divisor = 2; divisor <= numero / 2; ++divisor) {
        if (numero % divisor == 0) {
            return false;
        }
    }
    return true;
}

void comprobarDivisibilidad(int numero, int divisor) {
    if (numero % divisor == 0) {
        cout << numero << " es divisible entre " << divisor << endl;
    } else {
        cout << numero << " no es divisible entre " << divisor << endl;
    }
}

int main() {
    int numero;
    cout << "Introduce un numero entero y te dire si es primo, divisible entre 2, 3, 5 y o 7." << endl;
    cin >> numero;

    cout << "Has introducido el numero " << numero << endl;

    if (esPrimo(numero)) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }

    comprobarDivisibilidad(numero, 2);
    comprobarDivisibilidad(numero, 3);
    comprobarDivisibilidad(numero, 5);
    comprobarDivisibilidad(numero, 7);

    return 0;
}
