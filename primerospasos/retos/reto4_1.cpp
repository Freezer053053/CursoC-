#include <iostream>

using namespace std;

void mostrarArray(int array[], int tamano){

    for(int i=0; i<tamano; i++){

        cout<<array[i]<<" ";

    }

    cout<<endl;

}

void invertirArray(int array[], int tamano){

    int inicio=0;
    int fin=tamano-1;

    while(inicio<fin){

        int a=array[inicio];

        array[inicio]=array[fin];
        array[fin]=a;

        inicio++;
        
        fin--;

    }
    
}

int main(){

    int tamano;
    cin>>tamano;
    int array[tamano];

    cout<<"Introduce 5 valores:"<<endl;

    for(int i=0; i<tamano; i++){

        cin>>array[i];

    }

    cout<<"Array original: ";

    mostrarArray(array, tamano);

    invertirArray(array, tamano);

    cout<<"Array invertido: ";

    mostrarArray(array, tamano);

}
