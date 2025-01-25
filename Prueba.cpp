#include <iostream>
#include <stdlib.h>
using namespace std;

main()
{
    bool entrar=true;
    int op, num, cont, valor, contverificador, suma;

    while (entrar){
        cout<<"Menu de opciones"<<endl;
        cout<<"1.- Numeros abundantes"<<endl;
        cout<<"2.- Numeros deficientes"<<endl;
        cout<<"3.- Numeros amigos"<<endl;
        cout<<"4.- Salir"<<endl;
        cout<<"Ingresa una opcion ";
        cin>>op;
        if(op>=1 && op<=3)
        {
            cout<<"Ingrese el numero de datos: "<<endl;
            cin>>num;
            cont = 0;
            valor = 2;
        }
        switch (op)
        {
        case 1:
            while(cont<num){
                contverificador=1;
                suma=0;
                while(contverificador<valor){
                    if(valor % contverificador==0){
                        suma = suma + contverificador;
                    }
                    contverificador ++;
            } if(suma > valor){
                cout<<"Abundantes: "<<valor<<endl;
                cont ++;
                }
                valor ++;
            }
            break;
        case 2:
            while(cont<num){
                contverificador=1;
                suma=0;
                while(contverificador<valor){
                    if(valor%contverificador==0){
                        suma=suma+contverificador;
                    }
                    contverificador ++;
                } if(suma<valor){
                    cout<<"Deficientes: "<<valor<<endl;
                    cont ++;
                }
                valor++;
            }
            break;
        case 3:
            while(cont<num){
                contverificador=1;
                suma=0;
                while(contverificador<valor){
                    if(valor%contverificador==0){
                        suma=suma+contverificador;
                    }
                    contverificador++;
                } if(suma==valor){
                    cout<<"Amigos: "<<valor<<endl;
                    cont++;
                }
                valor ++;
            }
            break;
        case 4:
            entrar=false;
            break;
        default:
            if(op > 4)
            {
                cout<<"Opcion no valida"<<endl;
            }
            else
            {
                break;
            }
            system ("pause");
        }
        system("cls");
    }
}