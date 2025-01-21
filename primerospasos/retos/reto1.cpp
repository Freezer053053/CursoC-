#include <iostream>
#include <vector>

using namespace std;

int main(){

    int numero, divisor = 2, primo = 1;

    cout<<"Introduce un numero entero y te dire si es primo, divisible entre 2, 3, 5 y o 7."<<endl;

    cin>>numero;

    cout<<endl;

    cout<<"Has introducido el numero "<<numero<<endl;

    cout<<endl;
    
    vector <int> divisores;

    for (int i=2; i<=numero/2; ++i) {

        divisores.push_back(i);

    }

    while (divisor<=numero/2 && primo==1) {

        primo*=(numero%divisores[divisor-2] !=0);

        divisor++;

    }

    cout<<numero<<(primo ? " es un numero primo." : " no es un numero primo.")<<endl;

    if (numero%2 == 0){

        cout<<numero<<" es divisible entre 2"<<endl;
    }
    else{

        cout<<numero<<" no es divisible entre 2"<<endl;
    }

    if (numero%3 == 0){

        cout<<numero<<" es divisible entre 3"<<endl;
    }
    else{

        cout<<numero<<" no es divisible entre 3"<<endl;
    }

    if (numero%5 == 0){

        cout<<numero<<" es divisible entre 5"<<endl;
    }
    else{

        cout<<numero<<" no es divisible entre 5"<<endl;
    }

    if (numero%7 == 0){

        cout<<numero<<" es divisible entre 7"<<endl;
    }
    else{

        cout<<numero<<" no es divisible entre 7"<<endl;
    }

}