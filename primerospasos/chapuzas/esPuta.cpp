#include <iostream>

using namespace std;

int main(){

    bool folla;
    bool cobra;
    char respuesta;

    cout<<"Tu madre folla con desconocidos? (s/n)"<<endl;

    cin>>respuesta;

    if(respuesta=='s'){
        folla=true;
    }else if(respuesta=='n'){
        folla=false;
    }

    cout<<"Tu madre gana dinero al follar? (s/n)"<<endl;

    cin>>respuesta;

    if(respuesta=='s'){
        cobra=true;
    }else if(respuesta=='n'){
        cobra=false;
    }

    if(folla==true && cobra==true){

        cout<<"Tu madre es una puta como tu!"<<endl;
    
    }else{

        cout<<"Tu madre no es una puta!"<<endl;
    }



}