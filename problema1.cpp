/*Mostrar los múltiplos de 2 y 5 entre 0 y 100
Autor --> Franklin Hiustong Gutierrez Arizaca*/
#include<iostream>
#include<conio.h>
using namespace std;

//---- FUNCION MULTIPLO DE 2 ---------
int multiplo2(int numero){
    if(numero<=100){
        if(numero>=0){
            if(numero%2==0){
                cout<<numero<<" ";
            }
         }
    }
    return multiplo2(numero-1);
}
//---- FUNCION MULTIPLO DE 5 ---------
int multiplo5(int numero){
    if(numero<=100){
        if(numero>=0){
            if(numero%5==0){
                cout<<numero<<" ";
            }
        }
    }
    return multiplo5(numero-1);
}
int main(){
    int numero, m;
    cout<<"Ingresa una cantidad [igual o menor a 100] para hallar el multiplo: "; cin>>numero;
    if(numero<=100 && numero>0){
        cout<<"Ingrese el multiplo a realizar [2] o [5]: "; cin>>m;
        switch (m) {
            case 2:cout << "El multiplo de 2 es: " <<endl;
                cout<<multiplo2(numero);
                break;
            case 5:cout << "El multiplo de 5 es: " <<endl;
                cout<<multiplo5(numero);
                break;
            default: cout << "No escogiste ninguna de las 2 opciones sugeridas \n\n"; break;
        }
    }
    else{
        cout<<"La cantidad ingresada debe ser igual o menor a 100";
        return 0;
    }


    getch();
    return 0;
}

