#include <iostream>
using namespace std;
#define COUT(str) cout << str << endl;
#include <map>
#include <string>

// Función que devuelve un iterador a un elemento específico en un mapa
auto buscaEnMapa(const map<string, int>& myMap, const string& key) {
    return myMap.find(key);
}

int main() {
    // Creando y llenando un mapa
    map<string, int> miMapa = {
        {"manzana", 1},
        {"platano", 2},
        {"naranja", 3}
    };

    // Buscar un elemento en el mapa
    auto it = buscaEnMapa(miMapa, "platano");

    // Verificar si el elemento fue encontrado y mostrar su valor
    if (it != miMapa.end()) {
        COUT("Encontrado 'platano' con el valor: " << it -> second);
    } else {
        COUT("'Platano' no se ha encontrado en el mapa.");
    }

    return 0;
}
