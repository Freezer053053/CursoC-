#include <iostream>
using namespace std;


int calcularFactorial(int a){

    if(n==0){

        return 1;
    }else{
    
        return n*calcularFactorial(n-1);
    }
}

int main(){

    int num;

    cout<<"Introduce un numero para hacer el factorial: ";

    cin>>num;

    cout<<"El resultado es: "<<calcularFactorial(num)<<endl;

}