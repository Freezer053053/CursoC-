#include <iostream>
using namespace std;

void toLowerCase(string &cadena){

    for(int i=0; i<cadena.length(); i++){

        cadena[i]=tolower(cadena[i]);

    }

}

int main(){

    int edad;

    cout<<"Introduce la edad:"<<endl;

    cin>>edad;

    if(edad>=18){
        
        string examen;

        cout<<"Superaste el examen (Si/No)?"<<endl;

        cin>>examen;

        toLowerCase(examen);

        if(examen=="si"){

        cout<<"Eres mayor de edad y superaste el examen, puedes sacarte el carnet de conducir."<<endl;
        
        }

        else{

            cout<<"Eres mayor de edad, pero al no pasar el examen no puedes sacarte el carnet de conducir."<<endl;
       
        }
    
    }


    else{

        cout<<"Eres menor de edad, no puedes sacarte el carnet de conducir."<<endl;

    }

    
}