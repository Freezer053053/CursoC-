#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

double leerTemperatura(){

    return 20.0 + (rand() % 20);
}

void esperarSegundos(int segundos){

    this_thread::sleep_for(chrono::seconds(segundos));

}

int main(){

    const double MAX_TEMP=35.0;

    while(true){

        double tempActual=leerTemperatura();

        cout<<"Temperatura actual: "<<tempActual<<"ºC"<<endl;

        if(tempActual>MAX_TEMP){

            cout<<"ALERTA!! Temperatura elevada detectada: "<<tempActual<<"ºC"<<endl;
        }

        esperarSegundos(3);
    }
   
}