#include <iostream>
using namespace std;

int main(){

    int nums [4][5];

    for(int fila=0; fila<4; fila++){

        for(int columna=0; columna<5; columna++){

            cin >> nums[fila][columna];

        }
    }

    cout << "Visualizamos los valores del array bidimensional" << endl;

    for(int fila=0; fila<4; fila++){

        for(int columna=0; columna<5; columna++){

            cout << nums[fila][columna] << " ";

        }

        cout << endl;
    }
    
}