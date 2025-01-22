#include <iostream>
using namespace std;

inline int sumar(int a, int b){

    return a+b;
}

int main(){

    int a=3;
    int b=5;

    cout<<"La suma de "<<a<<" + "<<b<<" es "<<sumar(a, b)<<endl;


}

