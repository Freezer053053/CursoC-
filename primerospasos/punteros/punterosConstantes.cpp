#include <iostream>

using namespace std;

int main(){

    //punteros a constantes

  /*  const int edad=10;
    const int salario=2300;
    const int *ptr=&edad;

    //*ptr=20;  no compila, no funciona

    ptr=&salario;

    cout<<*ptr<<endl;*/

    //------------------------------------------------

    //punteros constantes

    /*int edad=10;
    int salario=3400;
    int* const ptr=&edad;

    *ptr=20;

    //ptr=&salario;   no compila, no funciona

    cout<<*ptr<<endl;*/

    //------------------------------------------------

    //punteros constantes que apuntan a constantes

    const int edad=10;
    const int salario=3600;
    const int* const ptr=&salario;

    //*ptr=2750;      no compila, no funciona
    
    //ptr=&edad;      no compila, no funciona

    cout<<*ptr<<endl;
}