#include <iostream>
using namespace std;

class MiClase {
    private:
        int edad; // Miembro privado

    public:
        void setValor(int valor) {
            if (valor < 0 || valor > 100) {
                cout << "Esa edad no puede ser";
                edad = 0;
            } else {
                edad = valor;
            }
        }

        void getMostrar() {
            cout << "Valor de edad: " << edad << endl;
        }
};

int main(){

    MiClase obj;

    obj.setValor(35);

    obj.setMostrar(); //Accediendo a metodo publico
}