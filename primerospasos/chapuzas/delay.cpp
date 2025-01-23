#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

void delay(int tiempo) {
    sleep_for(milliseconds(tiempo));
}

int main() {
    cout << "Esperando 3000 milisegundos..." << endl;

    delay(3000);

    cout << "Hecho!" << endl;

    return 0;
}
