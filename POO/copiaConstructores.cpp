#include <iostream>
using namespace std;

class Ejemplo{

private:
    int *puntero;
public:
    Ejemplo(int valor){
        puntero = new int(valor);
    }

    Ejemplo(const Ejemplo &origen){
        puntero = new int(*origen.puntero);
    }

    ~Ejemplo(){
        delete puntero;
    }
};

int main(){

    Ejemplo obj1(10);
    Ejemplo obj2 = obj1;

    return 0;
}