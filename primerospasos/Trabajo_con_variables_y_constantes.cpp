#include <iostream>
using namespace std;

int main(){

    string nombre = "Pepe";
    
    int edad {21};

    double salario;

    cout << "Introduce el salario del empleado: ";

    cin >> salario;

    cout << "Introduce la edad del empleado: ";

    cin >> edad;

    cout << "Datos del empleado: " << endl;

    cout << "Nombre: " << nombre << ". Edad: " << edad << ". Salario: " << salario;
}