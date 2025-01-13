#include <iostream>
using namespace std;

const double cal_alta = 55.3;
const double cal_media = 35.5;
int metros_media;
int metros_alta;
double iva;

int main(){

    cout << "Cuantos metros de tarima de media calidad quieres?" << endl;
    cin >> metros_media;
    cout << "Cuantos metros de tarima de alta calidad quieres?" << endl;
    cin >> metros_alta;

    int total_metros = metros_media + metros_alta;
    double precio_inicial = metros_alta * cal_alta + metros_media * cal_media;
    double iva = precio_inicial * 0.21;

    cout << "Total metros: " << total_metros << endl;
    cout << "Precio inicial: " << precio_inicial << " euros" << endl;
    cout << "Precio final: " << precio_inicial + iva << " euros" << endl;

}