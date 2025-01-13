#include <iostream>
#include <random>
using namespace std;

/* Crear un programa en C++ que genere un número aleatorio entre 1 y 100,
y le pida al usuario que adivine el número. El programa debe dar pistas al
usuario indicando si su adivinanza es demasiado alta o baja,
y contar cuántos intentos le lleva adivinar correctamente. */

int main(){


    //Generación del número aleatorio

    //----------------------------------------------
    random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<> distrib(1, 100);

    int numeroAleatorio = distrib(gen);

    cout<<numeroAleatorio<<endl;
    //----------------------------------------------

    cout<<"Intenta adivinar el numero aleatorio entre 1 y 100"<<endl;

    int num;

    cin>>num;

    while(num != numeroAleatorio){

        cout<<"Fallaste!"<<endl;

        if(num < numeroAleatorio){

            cout<<"Te has quedado corto!"<<endl;
        }
        else if (num > numeroAleatorio){

            cout<<"Te has pasado!"<<endl;
        }

        cout<<"Intentalo de nuevo"<<endl;

        cin>>num;

    }
    
    if(num == numeroAleatorio){

        cout<<"Has acertado!"<<endl;
    }


    
}