#include <iostream>
using namespace std;

int main(){

    char idioma;

    cout<<"Seleccione un idioma / Select a language:"<<endl;
    cout<<"Spanish (S) / English (E)"<<endl;

    cin>>idioma;

    idioma=tolower(idioma);

    switch(idioma){

        char categoria;

        case 's':

            cout<<"Seleccione la categoria que desee (L->Libros, M->Musica, R->Ropa): ";

            cin>>categoria;

            categoria=tolower(categoria);

            switch(categoria){

                case 'l':

                    cout<<"La categoria seleccionada es libros"<<endl;

                    break;

                case 'm':

                    cout<<"La categoria seleccionada es musica"<<endl;

                    break;

                case 'r':

                    cout<<"La categoria seleccionada es ropa"<<endl;

                    break;
                
                default:

                    cout<<"La categoria seleccionada no es valida"<<endl;

                    break;
        
            }

            break;

        case 'e':

            cout<<"Select the category you wish (B->Books, M->Music, C->Clothes): ";

            cin>>categoria;

            categoria=tolower(categoria);

            switch(categoria){

                case 'b':

                    cout<<"The selected category is books"<<endl;

                    break;

                case 'm':

                    cout<<"The selected category is music"<<endl;

                    break;

                case 'r':

                    cout<<"The selected category is clothes"<<endl;

                    break;
                
                default:

                    cout<<"The selected category isn't valid"<<endl;

                    break;
            }

            break;

            default:

            cout<<"Seleccion no valida / Invalid selection"<<endl;

    }
    
}