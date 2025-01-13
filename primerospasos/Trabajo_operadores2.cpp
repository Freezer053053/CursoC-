#include <iostream>
using namespace std;

int main(){

    int a=10;

    double b=12;

    int c=30;


    double media=(a+b+c)/3;

    cout<<"la media de los valores es: "<<media<<endl;

    cout<<"el tipo de dato de media es: "<<typeid(media).name()<<endl;


}