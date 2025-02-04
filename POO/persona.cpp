#include <iostream>
using namespace std;

class Persona{

    int *edad;

public:
    Persona(int e){

        edad=new int (e);
    }

    ~Persona(){

        delete edad;
    }

};

int main(){

    Persona p1(18);

}