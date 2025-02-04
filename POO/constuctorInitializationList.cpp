#include <iostream>
#include <chrono>   //Incluye la biblioterca chrono
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    //Constructor tradicional
    /*Persona(string nom, int ed) {
        nombre = nom;
        edad = ed;
        cout << "Constructor llamado" << endl;
    }*/

    //Constructor initialization list
    Persona(string nom, int ed):nombre(nom), edad(ed){

        cout << "Constructor llamado" << endl;

    }


    void mostrarDatos() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

int main() {

    auto comienzo=chrono::high_resolution_clock::now();

    for(int i; i<10000; i++) Persona p1("Carlos", 30);
    
    //p1.mostrarDatos();

    auto fin=chrono::high_resolution_clock::now();

    chrono::duration<double> lapso=fin-comienzo;

    cout<<"Tiempo de ejecucion: "<<lapso.count()<<" segundos"<<endl;

}
