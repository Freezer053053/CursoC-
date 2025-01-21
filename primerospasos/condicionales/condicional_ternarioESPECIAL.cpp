#include <iostream>
using namespace std;

int main(){

    int num;

    cout<<"Introduce un numero"<<endl;

    cin>>num;

/*    if(num%2 == 0){

        cout<<"Es un numero par"<<endl;

    }
    else{

        cout<<"Es un numero impar"<<endl;
    }
*/

    cout<<"El numero es "<<((num%2==0)?"par": "impar")<<endl;
}