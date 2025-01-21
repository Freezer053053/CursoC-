#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int numeroAleatorio = rand() % 100 + 1;
    
    cout << "Intenta adivinar el numero aleatorio entre 1 y 100, tienes 5 intentos" << endl;
    
    int num;
    int intentos = 0;
    bool acertado = false;

    while (intentos < 5 && !acertado) {
        cout << "Intento " << intentos + 1 << ": ";
        cin >> num;

        if (num == numeroAleatorio) {
            acertado = true;
        } else {
            cout << "Fallaste!" << endl;
            if (num < numeroAleatorio) {
                cout << "Te has quedado corto!" << endl;
            } else {
                cout << "Te has pasado!" << endl;
            }
        }
        intentos++;
    }

    if (acertado) {
        cout << "Has acertado!" << endl;
    } else {
        cout << "Te has quedado sin intentos!" << endl;
    }

    return 0;
}
