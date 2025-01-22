#include <iostream>
using namespace std;


int calcularFactorial(int a){

    int resultado=1;

    for(int i=1; i<=a; i++){
        resultado=resultado*i;
    }

    return resultado;
}

int main(){

    int num;

    cout<<"Introduce un numero para hacer el factorial: ";

    cin>>num;

    cout<<"El resultado es: "<<calcularFactorial(num)<<endl;

}