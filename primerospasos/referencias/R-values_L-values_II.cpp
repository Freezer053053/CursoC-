#include <iostream>
#include <utility>

using namespace std;

string miFuncion(string &&z){

    z+=" texto";

    return move(z);
}

int main(){

    string s1="Hola";
    string s2=miFuncion(move(s1)); // Movemos "Hola" a s2

    cout<<"El contenido es: "<<s1<<endl;
    cout<<"El contenido es: "<<s2<<endl; 

}