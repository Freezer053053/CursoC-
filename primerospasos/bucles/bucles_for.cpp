#include <iostream>
using namespace std;

int main(){

/*
    for (int i=0; i<10; i++){

        cout<<"Hola"<<endl;
    }
*/

/*    int edades[]{20,32,23,54,53};

    for (int i=0; i<5; i++){

        cout<<"Edad: "<<edades[i]<<endl;

    }
*/

    int edades[3][5]{
        {20,32,23,54,53},
        {65,75,86,35,64},
        {64,25,36,82,66}
    };

    for (int i=0; i<3; i++){

        for (int j=0; j<5; j++){

            cout<<"Edad: "<<edades[i][j]<<endl;
        
        }
    }

}