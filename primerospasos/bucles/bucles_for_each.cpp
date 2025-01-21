#include <iostream>
#include <vector>
using namespace std;

int main(){

    /*int edades[]{2,34,56,43,55};

    for (int n : edades){

        cout<<n<<endl;
    }*/

    /*string email = "fsalex@outlook.es";

    for (auto e : email){

        if(e=='@'){
            
            cout<<"Encontre la @"<<endl;
        }
    }*/
    
    vector <int> numeros;

    int num;

    cout<<"Introduce numeros. Escribe 0 para salir"<<endl;

    while(cin >> num && num!=0){

        numeros.push_back(num);
    }

    cout<<"Los numeros son:"<<endl;

    for (int n : numeros){

        cout<<n<<endl;
    }

}