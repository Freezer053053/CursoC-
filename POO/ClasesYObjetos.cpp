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


    return 0;
    
}