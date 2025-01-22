#include <iostream>
#include <cmath>

using namespace std;

void ejemploFuncion(int num){
    num=50;
}

int main(){
    int minum=10;
    cout<<"Valor original: "<<minum<<endl;

    ejemploFuncion(minum);
    cout<<"Valor despues de llamar a la funcion: "<<minum<<endl;
}