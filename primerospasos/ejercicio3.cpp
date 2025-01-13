#include <iostream>
#include <vector>

using namespace std;

int main() {

    int numero, divisor = 2, primo = 1;

    cout<<"Introduce un numero: ";

    cin>>numero;

    //Lleno un vector con posibles divisores del número

    vector <int> divisores;

    for (int i=2; i<=numero/2; ++i) {

        divisores.push_back(i);

    }

    while (divisor<=numero/2 && primo==1) {

        primo*=(numero%divisores[divisor-2] !=0);

        divisor++;

    }

    cout<<numero<<(primo ? " es un numero primo." : " no es un numero primo.")<<endl;

}
 