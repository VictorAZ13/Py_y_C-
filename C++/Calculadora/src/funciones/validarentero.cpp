#include <iostream>
#include "validarentero.h"
using namespace std;

int validarentero(const string &mensaje){
    int valor;
    while(true){
        cout<<mensaje;
        cin>> valor;
        if(cin.fail()){
            cin.clear();
            cin.ignore(10000,'\n');
            cout<<"Error: Ingrese un numero entero valido\n";
        }
        else{
            cin.ignore(1000,'\n');
            return valor;
        }
    }
}
