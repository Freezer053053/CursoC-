#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<double> precios={50, 120, 75, 300, 90, 200};

    double descuento=0.15;

    for(int i; i<precios.size(); i++){

        if(precios[i]<=100){

            continue;

        }

        precios[i]-=precios[i]*descuento;
    }

    for(int i=0; i<precios.size(); i++){
    
        cout<<"Precio final del producto "<<(i+1)<<": "<<precios[i]<<endl;
    
    }
    
}