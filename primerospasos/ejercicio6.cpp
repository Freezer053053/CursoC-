#include <iostream>

using namespace std;

/* Crear un programa en C++ que genere un número aleatorio entre 1 y 100,
y le pida al usuario que adivine el número. El programa debe dar pistas al
usuario indicando si su adivinanza es demasiado alta o baja,
y darle 5 intentos. */

int main(){


    int numeroAleatorio = rand()%100+1;

    cout<<"Intenta adivinar el numero aleatorio entre 1 y 100, tienes 5 intentos"<<endl;

    int num;

    int intentos=0;

    cin>>num;
    
    while(intentos!=5){

        while(num != numeroAleatorio && intentos!=5){

            cout<<"Fallaste!"<<endl;

            if(num < numeroAleatorio){

                cout<<"Te has quedado corto!"<<endl;
            }
            else if (num > numeroAleatorio){

                cout<<"Te has pasado!"<<endl;
            }

            cout<<"Intentalo de nuevo"<<endl;

            cin>>num;

            intentos++;

            cout<<intentos<<endl;

        }

        
    }
    
    if(intentos==5) {

        cout<<"Te has quedado sin intentos!"<<endl;
    }
    
    if(num == numeroAleatorio){

        cout<<"Has acertado!"<<endl;
    }


    
}