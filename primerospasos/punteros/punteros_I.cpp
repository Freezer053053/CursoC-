#include <iostream>
using namespace std;

int var=50;

void miFuncion(int *var){

    *var=*var+10;
}

int main(){

    miFuncion(&var);

    cout<<var<<endl;

}