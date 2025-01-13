#include <iostream>
#include <vector>
using namespace std;

int main(){

    int elementos;

    int valor;

    int posicion = 0;

   

    cout << "Introduce el numero de elementos que quieras que tenga el vector" << endl;

    cin >> elementos;

    cout << "El numero de elementos es " << elementos << endl;

    vector <int> records(elementos);

    cout << "Ahora introduce el valor de cada elemento" << endl;

    while(posicion < elementos){

        cin >> valor;

        records.push_back(valor);

        posicion++;

    }

    cout << "El valor de los elementos es: " << endl;
    
    while(posicion < records.size()){

        cout << records[posicion] << ", ";

        posicion++;
    }

    cout << endl;

}