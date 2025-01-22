#include <iostream>
using namespace std;

//  En los parametros de la funcion los parametros opcionales siempre van al final
void mostrarMensaje(string msg, int veces=1){

    for(int i; i<veces; i++){

        cout<<msg<<endl;

    }
}

int main(){

    mostrarMensaje("Hola");

}