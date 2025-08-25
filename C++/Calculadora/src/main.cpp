#include <iostream>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"
#include "espar.h"
#include "menu.h"
#include "validarentero.h"
using namespace std;

int main (){
    int opcionm,a,b;
    
    while(true){
        opcionm = menu();
        if(opcionm == 0){ //Esto si o si debe estar fuera del switch pues asi afecta directamente al while
            break;
        }
        switch (opcionm)
        {
        case 1:
            system("cls"); //limpiamos el menu en cada caso
            cout<<"Suma: \n";
            a = validarentero("Digita el primer numero: ");
            cout<<"\n";
            b= validarentero("Digita el segundo numero: ");
            system("cls");
            cout<<"Este es el resultado:\n"
            "("<<a<<"+"<<b<<")\n"<<"="<<sumar(a,b)<<endl;
            break;
        
        case 2:
            system("cls");
            cout<<"Resta:\n";
            
            a = validarentero("Digita el primer numero: ");
            cout<<"\n";
            b= validarentero("Digita el segundo numero: ");
            system("cls");
            cout<<"Este es el resultado:\n"
            "("<<a<<"-"<<b<<")\n"<<"="<<restar(a,b)<<endl;
            break;
        

        break;
        case 3:
            system("cls");
            cout<<"Multiplicación:\n";
            a = validarentero("Digita el primer numero: ");
            cout<<"\n";
            b= validarentero("Digita el segundo numero: ");
            system("cls");
            cout<<"Este es el resultado:\n"
            "("<<a<<"x"<<b<<")\n"<<"="<<multiplicar(a,b)<<endl;
            break;
        case 4:
            system("cls");
            cout<<"Division\n";
            a = validarentero("Digita el primer numero: ");
            cout<<"\n";
            b= validarentero("Digita el segundo numero: ");
            system("cls");
            if(b!=0){
                cout<<"Este es el resultado:\n"
                "("<<a<<"/"<<b<<")\n"<<"="<<dividir(a,b)<<endl;
            }
            else{
                cout<<"No es posible dividir con 0\n";
            }
        break;
        case 5:
            system("cls");
            cout<<"Verificar paridad:\n";
            a = validarentero("Digita el numero: ");
            system("cls");
            if(espar(a)){
            cout<<"Es par\n";
            }
            else{
            cout<<"Es impar \n";
            }
        break;
    default:
        system("cls");
        cout<<"Te confundiste opcion invalida (Hackeando tu pc)\n"
        "100001101010101110101010101010101\n10101010101010110101001\n"
        "Tienes otra oportunidad escoge la opcion correcta\n";
        break;
    }
    system("pause");
    system("cls");

}}