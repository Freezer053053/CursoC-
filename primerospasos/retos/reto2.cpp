// Introduce 5 números en un array y estos deven ordenarse.

#include <iostream>
using namespace std;

int main(){

    int numeros[5];

    cout<<"Introduce 5 numeros"<<endl;

    for(int posicion=0; posicion<5; posicion++){

        cin>>numeros[posicion];

    }

    cout<<endl;

    int numerosOrdenados [5];

    for(int i=0; i<5; i++){

        numerosOrdenados[i]=numeros[i];

    }

    for(int i=0; i<5; i++){

        for(int j=0; j<4; j++){

            if(numerosOrdenados[j]>numerosOrdenados[j+1]) {
             // Ej: j=(5), j+1=(2)
                
                numerosOrdenados[j]=numerosOrdenados[j]+numerosOrdenados[j+1];  
                //  j(5) = j(5)+j+1(2)----->j=(7)

                numerosOrdenados[j+1]=numerosOrdenados[j]-numerosOrdenados[j+1];
                //  j+1(2) = j(7)-j+1(2)----->j+1=(5)

                numerosOrdenados[j]=numerosOrdenados[j]-numerosOrdenados[j+1];
                //  j(7) = j(7)-j+1(5)----->j=(2)

                //Así intercambioamos los valores

            }

        }
    }

    cout<<"Estos son los numeros almacenados:"<<endl;

    for(int i=0; i<5; i++){

        cout<<numeros[i]<<" ";
    }

    cout<<endl;

    cout<<"Los numeros ordenados son: ";

    for(int i=0; i<5; i++){

        cout<<numerosOrdenados[i]<<" ";
    }

    cout<<endl;
    

    
}