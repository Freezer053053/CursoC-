#include <iostream>
using namespace std;

int main() {
    const double PRECIO_ALTA = 55.3;
    const double PRECIO_MEDIA = 35.5;
    const double IVA = 0.21;

    double metrosAlta, metrosMedia;
    double totalAlta, totalMedia, totalSinIVA, totalConIVA;

    // Entrada de datos
    cout << "Ingrese los metros cuadrados de tarima de alta calidad: ";
    cin >> metrosAlta;

    cout << "Ingrese los metros cuadrados de tarima de media calidad: ";
    cin >> metrosMedia;

    // Cálculos
    totalAlta = metrosAlta * PRECIO_ALTA;
    totalMedia = metrosMedia * PRECIO_MEDIA;
    totalSinIVA = totalAlta + totalMedia;
    totalConIVA = totalSinIVA * (1 + IVA);

    // Salida de resultados
    cout << "\nResumen de la compra:" << endl;
    cout << "Total sin IVA: " << totalSinIVA << " euros" << endl;
    cout << "Total con IVA (21%): " << totalConIVA << " euros" << endl;

    return 0;
}