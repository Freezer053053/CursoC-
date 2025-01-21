#include <iostream>
using namespace std;

int main(){
    int numero;
    
    cout<<"Introduce el numero de elementos: ";

    cin>>numero;

    int numeros[numero];
    
    cout<<"Introduce "<<numero<<" numeros:"<<endl;

    for(int i=0; i<numero; i++){

        cin>>numeros[i];
    }

    cout<<"Numeros en orden inverso:"<<endl;

    for(int i=0; i<numero; i++){

        cout<<numeros[numero-1-i]<<" ";

    }

    cout<<endl;

}
