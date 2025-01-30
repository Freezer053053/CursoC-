#include <iostream>
using namespace std;

class Coche{

    //Atributos y propiedades

    string modelo;
    int cilindrada;
    int potencia;
    string color;
    double precio;

    //Metodos/comportamientos

    public:
    void setPrecio(double p){

        precio=p;
    }

    double getPrecio(){

        return precio;
    }

    void arrancar(){

        cout<<"Coche arrancado"<<endl;

    }

    void acelerar(){

        cout<<"Coche acelerando"<<endl;

    }

    void frenar(){

        cout<<"Coche frenando"<<endl;

    }

    void girar(){

        cout<<"Coche girando"<<endl;

    }

    bool enMarcha (){

    return true;

    }

};

int main(){

    Coche coche_Maria;

    Coche coche_Juan;

    //  Crear punteros a objetos

    Coche* ptrCocheMaria= &coche_Maria;
    Coche* ptrCocheJuan= &coche_Juan;

    // Usar el puntero para acceder a los metodos de objeto coche_Juan

    ptrCocheJuan->setPrecio(30000);

    cout<<"El precio es: "<<ptrCocheJuan->getPrecio()<<endl;

    //  Usando el puntero para acceder a metodos de cocheMaria

    ptrCocheMaria->acelerar();

    return 0;
    
}