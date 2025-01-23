#include <iostream>

using namespace std;

int main(){

    int cifras[]{10,20,30};
    int *ptr_cifras{cifras};

    cout<<ptr_cifras[0]<<endl;  //accedo al valor de la primera posicion del array
    cout<<*(ptr_cifras+1)<<endl;    //accedo al valor de la segunda posicion del array
    cout<<ptr_cifras[2]<<endl;  //accedo al valor de la tercera posicion del array


    
}