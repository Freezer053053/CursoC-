#include <iostream>
using namespace std;

int main(){

    char a='f';
    char b='b';
    char comodin;

    cout<<"el valor de a es "<<a<<" y el valor de b es "<<b<<"."<<endl;

    comodin=a;
    a=b;
    b=comodin;

    cout<<"ahora el valor de a es "<<a<<" y el valor de b es "<<b<<"."<<endl;

}

