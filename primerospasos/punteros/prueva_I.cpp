#include <iostream>

using namespace std;

int main(){

    int numeros[]{3,5,2,45,34};
    int *posicion=nullptr;
    int seleccionada;
    int nuevo_valor;

    cout<<"Estos son los valores del array: ";

    for(int i=0; i<5; i++){
        cout<<numeros[i]<<" ";
    }

    cout<<endl;

    cout<<"Que posicion del array quieres cambiar? (0, 1, 2, 3 o 4)"<<endl;
    cin>>seleccionada;

    posicion=&numeros[seleccionada];

    cout<<"Has elegido: "<<*posicion<<endl;

    cout<<"Que valor le quieres asignar? ";

    cin>>nuevo_valor;

    *posicion=nuevo_valor;

    cout<<"Estos son los valores del array ahora: ";

    for(int i=0; i<5; i++){
        cout<<numeros[i]<<" ";
    }

    cout<<endl;


}