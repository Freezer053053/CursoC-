#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> records{25,45,60,35};

    vector <char> letras{'a', 'e', 'd'};

    vector <double> salario_base (350, 2125.50);

    records.push_back(105);

    cout << "Metodo for:" << endl;

    for(int fila=0; fila<records.size(); fila++){

        cout << records[fila] << " ";
    }

    cout << endl;

    cout << "Metodo while:" << endl;

    int fila=0;

    while(fila < records.size()){

        cout << records[fila] << " ";

        fila++;
    }

    cout << endl;


}