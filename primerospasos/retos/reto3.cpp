#include <iostream>
using namespace std;

int main(){

    int alfabetoPos[26]; //Array que contiene el numero de cada letra
    char alfabeto[26]{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm','n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int valor=0;
    int posicion=0;

    for(int i=0; i<26; i++){    //Asigno un numero a cada posición de una letra
        
        alfabetoPos[valor]=i;

        valor++;
    }
    
    char letra;
    char letras[letra];
    char letraSalir='A';
    int pos=0;

    cout<<"Introduce las letras que quieres que se ordenen alfabeticamente,\nno repitas letras y escribe A en mayuscula para salir.\nPuedes poner hasta un maximo de 26 letras."<<endl;

    while(letra!=letraSalir || pos==26){

        letras[pos]=letra;

        cin>>letra;

        pos++;
        
    }

    for(int i=0; i<27; i++){

        cout<<letras[i]<<" ";
    }

    cout<<endl;
    
}