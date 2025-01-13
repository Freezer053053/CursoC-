#include <iostream>
using namespace std;


int main(){

    /*Se da beca si su calificacion superior a 8 o
    si la distancia del domicilio al centro es superior a 20Km*/
    int edad;

    cout<<"Introduce la edad:"<<endl;

    cin>>edad;

    if(edad>=18){
        
        string examen;

        cout<<"Superaste el examen (Si/No)?"<<endl;

        cin>>examen;

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