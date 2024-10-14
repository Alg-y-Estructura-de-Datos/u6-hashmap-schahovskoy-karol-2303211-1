#include <iostream>
#include "HashMap/HashMap.h"
#include <string>

using namespace std;

void menu(HashMap <int,string>& empleados) {
    int op=0;
    while (op!=5){
    cout << "1. Agregar empleado" << endl;
    cout << "2. Buscar empleado" << endl;
    cout << "3. Eliminar empleado" << endl;
    cout << "4. Mostrar todos los empleados" << endl;
    cout << "5. Salir" << endl;
    cout << "Elija una opcion: ";
    cin>> op;
        switch(op) {
            case 1: {
            int id;
            string nombre;
            try{
                cout << "Ingrese ID del empleado: ";
                cin >> id;
                cout << "Ingrese nombre del empleado: ";
                cin >> nombre;
                empleados.put(id, nombre);
                cout << "Empleado agregado correctamente." << endl;
            }
            catch (int e){
                cout << "Error: Codigo de empleado ya existe." << endl;
            }
            break;
            }

            case 2: {
            int id;
            cout << "Ingrese ID del empleado a buscar: ";
            try{
                cin >> id;
                cout<<empleados.get(id)<<endl;
                
            }
            catch (int e){
                cout << "Error: Codigo de empleado no existe." << endl;
            }
            break;
            }

            case 3: {
            int id;
            cout << "Ingrese ID del empleado a eliminar: ";
            cin >> id;
            try {
                cout<<"Empleado eliminado correctamente"<<endl;
                empleados.remove(id);
            }
            catch(int e){
                cout<< "EL empelado no existe"<<endl;
            }
            break;
            }

            case 4: {
            cout << "Lista de empleados:" << endl;
            empleados.print();
            break;
            }

            case 5:{
            cout<< "Saliendo..."<<endl;
            }
            break;

            default:
            cout << "Opcion no valida" << endl;
            break;

        }
    }
}

int main() {

    cout << "Ejercicio N° 2" << endl;

    HashMap<int,string> empleados(11);
    menu(empleados);

    return 0;
}
