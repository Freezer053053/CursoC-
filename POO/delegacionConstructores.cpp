#include <iostream>
using namespace std;

class CuentaBancaria{

public:
    string titular;
    double saldo;

    /*CuentaBancaria(string t): CuentaBancaria(t,0.0){

    //cout<<"Cuenta creada para el cliente "<<titular<<" con un saldo de "<<saldo<<" euros."<<endl;
    }

    CuentaBancaria(string t, double s): titular(t), saldo(s){

    cout<<"Cuenta creada para el cliente "<<titular<<" con un saldo de "<<saldo<<" euros."<<endl;
    }*/

    CuentaBancaria(string t, double s=0.0): titular(t), saldo(s){

    cout<<"Cuenta creada para el cliente "<<titular<<" con un saldo de "<<saldo<<" euros."<<endl;
    }
};

int main(){

    CuentaBancaria cuenta1("Marcos");
    CuentaBancaria cuenta2("Juan", 1750.50);

}