#include <iostream>
using namespace std;

class Ejemplo{

private:
    int *puntero;
public:
    Ejemplo(int valor){
        puntero = new int(valor);
    }

    // Constrictor copia
    Ejemplo(const Ejemplo &origen){
        puntero = new int(*origen.puntero);
    }

    // Constructor de movimiento
    Ejemplo(Ejemplo &&origen): puntero(origen.puntero){
        origen.puntero = nullptr;
    }

    ~Ejemplo(){
        delete puntero;
    }
};

int main(){

    //Ejemplo obj1(10);
    Ejemplo* obj1 = new Ejemplo(10); // Se crea un objeto en el heap
    Ejemplo obj2 = move(*obj1);   // Movemos el objeto de obj1 a obj2

    delete obj1; // Se libera la memoria del objeto en el heap

    return 0;
}