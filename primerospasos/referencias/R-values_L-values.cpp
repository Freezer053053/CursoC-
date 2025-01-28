#include <iostream>
#include <utility>

using namespace std;

void funcion1(int &&x){  //  x es un R-value

    x+=5;
}

int main(){

    int z=15;   //  z es un L-value y 15 es un R-value
    //int b=z;    //  b es un L-value y z es un L-valua que se evalua como R-value

    funcion1(move(z));

    cout<<"El valor de z es "<<z<<endl;
    //cout<<"El valor de b es "<<b<<endl;

}