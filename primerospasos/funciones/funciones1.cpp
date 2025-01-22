#include <iostream>
#include <cmath>

using namespace std;

double elevaPotencia(double base, double exponente){

    return pow(base, exponente);
}

int main(){

    double base;
    double exponente;

    cout<<"Introduce el numero base: ";
    cin>>base;
    cout<<endl;
    cout<<"Introduce el exponente: ";
    cin>>exponente;
    cout<<endl;
    cout<<"El resultado es "<<elevaPotencia(base,exponente)<<endl;
}