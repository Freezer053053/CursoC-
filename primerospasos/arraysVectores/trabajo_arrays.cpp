#include <iostream>
using namespace std;

int main(){

    const int personas{10};

    int edades[personas]{12,34,45,35};

    cout << edades[2] << endl;

    edades[4] = 65; 

    cout << edades[4] << endl;
  
}