#include <iostream>
#include <cmath>

using namespace std;

/*  Función prototipo, informa al compilador
    de que esta funcion esta en el programa
    y la tenga en cuenta.
    ||||||||||||||||
    vvvvvvvvvvvvvvvv*/
double elevaPotencia(double base, double exponente);

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

double elevaPotencia(double base, double exponente){

    return pow(base, exponente);
}