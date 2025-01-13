#include <iostream>
using namespace std;

int main(){

    /*Se da beca si su calificacion superior a 8 o
    si la distancia del domicilio al centro es superior a 20Km y ademas los
    ingresos familiares son inferiores a 20.000 euros*/

    int calificacion;

    int distancia;

    int ingresos; 
    
    cout<<"Introduce tu calificacion academica"<<endl;

    cin>>calificacion;

    cout<<"Tu calificacion es: "<<calificacion<<endl;

    cout<<"Ahora introduce la distancia en Km de tu domicilio al centro academico"<<endl;

    cin>>distancia;

    cout<<"La distancia es de "<<distancia<<" Km"<<endl;

    cout<<"Ahora introduce los ingrsos familiares"<<endl;

    cin>>ingresos;

    cout<<"Los ingresos son: "<<ingresos<<" euros"<<endl;

    if(calificacion>=8 || (distancia>=20 && ingresos<20000)){

        cout<<"Eres apto para recivir la beca."<<endl;

    }
    else{

        cout<<"No eres apto para recivir la beca."<<endl;
    }

}