#include <iostream>
#include <cstdlib>  //para reand() y srand()
#include <ctime>    //para time()

using namespace std;

int main(){

    srand(time(nullptr));

    char continuar;

    do{
    
    int numeroSecreto=rand()%100+1;    
    
    int intentos=0;

    bool adivinado=false;

    while(intentos<5 && !adivinado){

        int miNumero;

        cout<<"introduce un numero entre 1 y 100"<<endl;

        cin>>miNumero;

        if(miNumero==numeroSecreto){

            cout<<"ha acertado!"<<endl;

            adivinado=true;
        }else if(miNumero<numeroSecreto) cout<<"El numero es mayor"<<endl;
        else cout<<"El numero es menor"<<endl;

        intentos++;
    }

    if(!adivinado) cout<<"Lo siento, no has adivinado el numero. Era el numero: "<<numeroSecreto<<endl;

        cout<<"Quieres intentar de nuevo? (s/n)"<<endl;

        cin>>continuar;

    }while(continuar=='s'||continuar=='S');

    cout<<"¡Gracias por jugar!"<<endl;
}