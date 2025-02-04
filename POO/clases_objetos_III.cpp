#include <iostream>
using namespace std;

class MiClase {
    protected:
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

        
};

class Derivada:public MiClase{

public:

    void getMostrar() {
        cout << "Valor de edad: " << edad << endl;
    }

};

int main(){

    Derivada obj;

    obj.setValor(35);

    obj.getMostrar(); //Accediendo a metodo publico
}