#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

double perform_operation(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : throw runtime_error("Division by zero");
        default: throw runtime_error("Invalid operator");
    }
}

int main() {
    double num1, num2;
    char op;
    cout << "Ingrese la expresión (ej. 3 + 4): ";
    cin >> num1 >> op >> num2;

    try {
        double result = perform_operation(num1, num2, op);
        cout << "Resultado: " << result << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
