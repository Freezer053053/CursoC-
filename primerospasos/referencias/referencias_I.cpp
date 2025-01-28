#include <iostream>
#include <string>

using namespace std;

void intercambio(int &a, int &b){

    int temp=a;
    a=b;
    b=temp;
}

int main(){

    int var1=10;
    int var2=20;

    cout<<"Antes del intercambio: var1= "<<var1<<" var2= "<<var2<<endl;

    intercambio(var1, var2);

    cout<<"Despues del intercambio: var1= "<<var1<<" var2= "<<var2<<endl;


}