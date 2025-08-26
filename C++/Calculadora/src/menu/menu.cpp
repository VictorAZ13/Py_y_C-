#include "menu.h"
#include <iostream>
using namespace std;
#include <iostream>
#include <fstream>
#include <string>

int menu(){
    ifstream archivo("datos.txt");
    string linea;
    string nombre = "Usuario",edad="",estatura = "";
    while (getline(archivo,linea))
    {
        if(linea.rfind("Nombre",0) == 0){
            nombre = linea.substr(7);
        }
        if(linea.rfind("Edad",0) == 0){
            edad = linea.substr(5);
        }
        if(linea.rfind("Estatura",0) == 0){
            estatura = linea.substr(9);
            break;
        }
    }
    
        int opcion;
        cout<<"Hola "<<nombre<<endl<<"Tu estatura es: "<<estatura<<endl<<"Tu edad es: "<<edad<<endl<<"Este es un menu selecciona una opcion \n"
        "1. Sumar 2 numeros \n"
        "2. Restar 2 numeros \n"
        "3. Multiplicar 2 numeros \n"
        "4. Dividir 2 numeros \n"
        "5. Comprobar si un numero es par \n"
        "0. Salir\n"
        "Selecciona una opcion: ";
    cin>>opcion;
    return opcion;
}