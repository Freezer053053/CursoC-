#include <iostream>
using namespace std;

int main(){

    const int personas{10};

    int edades[personas]{12,34,45,35};

    cout << edades[7] << endl;

    edades[7] = 45; 

    cout << edades[7] << endl;
  
}