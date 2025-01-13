#include <iostream>
using namespace std;

int main(){

    int opcion;

    cout<<"Menu de opciones:"<<endl;

    cout<<"Que color quieres?"<<endl;
    
    cout<<endl;
    
    cout<<"Rojo(1), Amarillo(2), Azul(3)"<<endl;

    cin>>opcion;

    switch(opcion){

        case 1:

            cout<<"Color rojo seleccionado"<<endl;

            break;

        case 2:

            cout<<"Color amarillo seleccionado"<<endl;

            break;

        case 3:

            cout<<"Color azul seleccionado"<<endl;

            break;

        default:

            cout<<"La opcion seleccionada no existe."<<endl;
    }
}