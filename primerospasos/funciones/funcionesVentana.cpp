#include <iostream>
using namespace std;

void crearVentana(int ancho=800, int alto=600, string titulo="mi ventana", bool completa=false){

    cout<<"Creando ventana: "<<titulo<<"\n"
        <<"Ancho: "<<ancho<<"\n"
        <<"Alto: "<<alto<<"\n"
        <<"Pantalla completa: "<<(completa ? "Si" : "No")<<"\n\n";
}

int main(){

    //crearVentana();

    //crearVentana(300, 150);

    //crearVentana(900, 750, "Menu");

    crearVentana(1080, 768, "Juego", true);

}