#include <iostream>
#include <string>

using namespace std;

//definicion de la clase coche

class Coche{


    //Propiedad modelo del Coche
    private:
        string modelo;

    //Constructor que inicializa el modelo Coche
    public:
        Coche(string mod):modelo(mod){}

    //Metodo para obtener el modelo del Coche

    string getModelo() const{

        return modelo;
    }
};

//Funcion que crea un nuevo Coche y devuelve un puntero a el

Coche* crearCoche(string modelo){

    Coche* nuevoCoche=new Coche(modelo);

    return nuevoCoche;
}

int main(){

    //crea Coche llamando a la funcion

    Coche* miCoche=crearCoche("Ford C-Max");

    //accede al modelo del coche desde a traves del puntero y muestra el modelo

    cout<<"Modelo del coche: "<<miCoche->getModelo()<<endl;

    //Es importante liberar la memoria una vez terminada de usar

    delete miCoche;

}