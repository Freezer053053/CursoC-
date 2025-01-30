#include <iostream>
using namespace std;

class Coche{

    //Atributos y propiedades

    string marca;
    double cilindrada;
    int potencia;
    string color;
    double precio;

    //Metodos/comportamientos

    public:

    void setMarca(string m){

        marca=m;
    }

    string getMarca(){
        return marca;
    }

    void setCilin(int f){
        if(f=1){
            cilindrada=1.0;
        }else if(f=2){
            cilindrada=2.0;
        }else if(f=3){
            cilindrada=4.0;
        }
    }

    double getCilin(){
        return cilindrada;
    }

    void setPotencia(int p){
        potencia=p;
    }

    int getPotencia(){
        return potencia;
    }

    void setColor(int c){
        if (c==1){
            color="Blanco";
        }else if (c==2){
            color="Rojo";
        }else if (c==3){
            color="Verde";
        }else if (c==4){
            color="Azul";
        }else if (c==5){
            color="Amarillo";
        }else if (c==6){
            color="Negro";
        }
    }

    string getColor(){
        return color;
    }

    void setPrecio(double p){
        if(p<0) precio=0;
        else precio=p;
    }

    double getPrecio(){
        return precio;
    }

    void arrancar(){
        cout<<"Coche arrancado"<<endl;

    }

    void acelerar(){
        cout<<"Coche acelerando"<<endl;

    }

    void frenar(){
        cout<<"Coche frenando"<<endl;

    }

    void girar(){
        cout<<"Coche girando"<<endl;

    }

    bool enMarcha (){
        return true;

    }

};

int main(){

    Coche coche1;

    double dinero;
    string marca;
    int potencia;
    int cilindrada;
    int color;

    cout<<"Introduce el precio del coche"<<endl;
    cin>>dinero;
    coche1.setPrecio(dinero);

    cout<<"Introduce la marca del coche"<<endl;
    cin>>marca;
    coche1.setMarca(marca);

    cout<<"Introduce el color del coche:\nBlanco(1)\nRojo(2)\nVerde(3)\nAzul(4)\nAmarillo(5)\nNegro(6)"<<endl;
    cin>>color;
    coche1.setColor(color);

    cout<<"Introduce la cilindrada del coche:\n1.0 Litros(1)\n2.0 Litros(2)\n4.0 Litros(3)"<<endl;
    cin>>cilindrada;
    coche1.setCilin(cilindrada);

    cout<<"Introduce la potencia del coche"<<endl;
    cin>>potencia;
    coche1.setPotencia(potencia);

    cout<<"Estas son las propiedades de coche:\n\nMarca: "<<coche1.getMarca()<<"\nColor: "<<coche1.getColor()<<"\nCilindrada: "<<coche1.getCilin()<<" Litros\nPotencia: "<<coche1.getPotencia()<<"CV\nPrecio: "<<coche1.getPrecio()<<" euros"<<endl;

    return 0;
    
}