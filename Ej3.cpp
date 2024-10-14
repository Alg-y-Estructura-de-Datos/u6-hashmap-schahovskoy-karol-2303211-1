#include <iostream>
#include "HashMap/HashMapList.h"
#include <string>

using namespace std;

void menu(HashMapList <long,string>& votantes){
    int op=0;
    int id;
    string nombre;
    while (op!=5){
        cout<<"1. Registrar el voto"<<endl;
        cout<<"2. Verificar votos por ID"<<endl;
        cout<<"3. ELiminar voto"<<endl;
        cout<<"4. Imprimir todos los votos"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>op;
        switch(op){
            case 1:
            try{
                cout<<"Ingrese el Id del votante"<<endl;
                cin>>id;
                cout<<"Ingrese el nombre del candidato a votar"<<endl;
                cin>>nombre;
                votantes.put(id, nombre);
            }
            catch(int e){
                cout<<"Colisión"<<endl;
            }
            break;

            case 2:
                cout<<"Ingrese el ID a verificar"<<endl;
                cin>>id;
                try{
                    cout<<votantes.get(id)<<endl;
                }
                catch (int e){
                    cout<<"Error"<<endl;
                }
            break;

            case 3:
            cout<<"Ingrese el ID del voto a eliminar"<<endl;
            cin>>id;
            try{
                votantes.remove(id);
                cout<<"Voto eliminado correctamente"<<endl;
            }
            catch (int e){
                cout<<"Error"<<endl;
            }
            break;

            case 4:
            votantes.print();
            break;

            case 5:
            cout<<"Saliendo..."<<endl;
            break;

            default:
            break;
        }
    }
}

int main(){

    HashMapList<long,string> votantes (11);
    menu(votantes);

    return 0;
}