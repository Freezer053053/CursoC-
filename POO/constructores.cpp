#include <iostream>
using namespace std;

class Rectangulo{

private:

    int ancho;
    int alto;
    string nombre;

public:
    Rectangulo(string nom){

        ancho=10;
        alto=5;
        nombre=nom;
    }

    Rectangulo(int medida, string nom){

        ancho=medida;
        alto=4;
        nombre=nom;
    }

    Rectangulo(int an, int al, string nom){

        ancho=an;
        alto=al;
        nombre=nom;
    }

    ~Rectangulo(){

        cout<<"Destructor invocado para objeto "<<nombre<<endl;
    }

};

int main(){

    Rectangulo r1("r1");
    Rectangulo r2(12,"r2");
    Rectangulo r3(13, 20,"r3");

}