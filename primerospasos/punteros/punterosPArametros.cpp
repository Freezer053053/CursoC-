#include <iostream>

using namespace std;

void cambiarValor(int *valor){

    (*valor)+=5;
}

int main(){

    int num=5;

    cout<<"el valor de num antes: "<<num<<endl;

    cambiarValor(&num);

    cout<<"el valor de num despues: "<<num<<endl;



}