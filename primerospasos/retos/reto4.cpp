#include <iostream>
using namespace std;

int main(){

    int numero;

    cout<<"Introduce el numero de elementos: ";

    cin>>numero;

    int numeros[numero];

    cout<<"Introduce "<<numero<<" numeros:"<< endl;

    for(int i=0; i<numero; i++) {

        cin>>numeros[i];

    }


    for(int i=0; i<numero/2; i++) {

        numeros[i]=numeros[i]+numeros[numero-1-i];

        numeros[numero-1-i]=numeros[i]-numeros[numero-1-i];

        numeros[i]=numeros[i]-numeros[numero-1-i];

    }

    cout << "Array invertido:" << endl;

    for(int i = 0; i < numero; i++) {

        cout << numeros[i] << " ";

    }

    cout << endl;
}
