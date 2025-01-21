#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string> nombres={"Juan", "Pepe", "Eduardo", "Ana", "Marcos", "Luis"};

    string persona_buscada="Ana";

    for(int i; i<nombres.size(); i++){

        if(nombres[i]==persona_buscada){

            cout<<persona_buscada<<" encontrada en la posicion "<<++i<<endl;

            break;
        }
    }

    cout<<"Hemos salido del bucle"<<endl;
    
}