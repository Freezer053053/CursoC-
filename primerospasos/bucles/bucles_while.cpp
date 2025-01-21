#include <iostream>

using namespace std;

int main(){

    int num, suma=0;

    cout<<"Introduce los numeros que quieres que se sumen, escribe 0 para finalizar"<<endl;

    cin>>num;

    while(num!=0){

        suma+=num;

        cin>>num;

    }

    cout<<"La suma es "<<suma<<endl;

}