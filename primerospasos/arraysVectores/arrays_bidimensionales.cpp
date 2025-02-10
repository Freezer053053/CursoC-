#include <iostream>
using namespace std;

int main(){

    // Declaramos un array bidimensional de 4 filas y 5 columnas
    int nums [4][5];

    // Bucle para introducir los valores en el array
    for(int fila=0; fila<4; fila++){

        for(int columna=0; columna<5; columna++){

            // Introducimos los valores y los almacenamos en el array
            cin >> nums[fila][columna];

        }
    }

    // Imprimimos un mensaje indicando que vamos a visualizar los valores del array
    cout << "Visualizamos los valores del array bidimensional" << endl;

    // Bucle para imprimir los valores almacenados en el array
    for(int fila=0; fila<4; fila++){

        for(int columna=0; columna<5; columna++){

            // Imprimimos el valor almacenado en la posición (fila, columna) del array
            cout << nums[fila][columna] << " ";

        }

        // Imprimimos un salto de línea después de imprimir todos los valores de una fila
        cout << endl;
    }
    
}
