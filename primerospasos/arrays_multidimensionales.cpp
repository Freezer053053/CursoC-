#include <iostream>
using namespace std;

int main(){

    int paso_coches[24][31][12];    //hora, día y mes

    for(int i=0; i<24; i++){

        for(int j=0; j<31; j++){

            for(int z=0; z<12; z++){

                paso_coches[i][j][z] = rand() % 1000;
            }
        }
    }

    cout << "El numero de coches que pasaron el 7 de noviembre a las 19:00 fueron: " << paso_coches[19][6][10] << endl;

}