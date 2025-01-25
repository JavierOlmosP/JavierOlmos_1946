#include <iostream>
#include <conio.h>
using namespace std;
bool entrar = true;
int op, cantNumeros, contador, Nverificador, contVerificador, suma;
int menu()
{
    
}
int abundantes()
{
    while (contador < cantNumeros)
    {
        contVerificador = 1;
        suma = 0;
        while (contVerificador < Nverificador)
        {
            if ( Nverificador % contVerificador == 0)
            {
            suma = suma + contVerificador;
            }
            contVerificador++;
        }
        if (suma > Nverificador)
        {
            cout << "Abundante: " << Nverificador << endl;
            contador++;
        }
        Nverificador++;
    }
}
int deficientes()
{
    while (contador < cantNumeros)
    {
        contVerificador = 1;
        suma = 0;
        while (contVerificador < Nverificador)
        {
            if ( Nverificador % contVerificador == 0)
            {
                suma = suma + contVerificador;
            }
            contVerificador++;
        }
        if (suma < Nverificador)
        {
            cout << "Deficiente: " << Nverificador << endl;
            contador++;
        }
        Nverificador++;
    }
}
int amigos()
{
    while (contador < cantNumeros)
    {
        contVerificador = 1;
        suma = 0;
        while (contVerificador < Nverificador)
        {
            if ( Nverificador % contVerificador == 0)
            {
                suma = suma + contVerificador;
            }
            contVerificador++;
        }
        if (suma == Nverificador)
        {
            cout << "Amigo: " << Nverificador << endl;
            contador++;
        }
        Nverificador++;
    }
}
int main()
{
    while (entrar)
    {
        cout << "\n<<<<MENU DE OPCIONES>>>>\n" << endl;
        cout << "1. Numeros Abudantes" << endl;
        cout << "2. Numeros Deficientes" << endl;
        cout << "3. Numeros Amigos" << endl;
        cout << "4. Salir\n" << endl;
        cout << "**Ingrese una opcion**: ";
        cin >> op;

        if(op > 0 && op < 4)
        {
            cout << "\nIngrese la Cantidad de Numeros: ";
            cin >> cantNumeros;
            contador = 0;
            Nverificador = 2;
        }

        switch (op)
        {
        case 1:
            abundantes();
            break;
        case 2:
            deficientes();
            break;
        case 3:
            amigos();
            break;
        case 4:
            entrar = false;
        default:
            if(op > 4)
            {   
                cout << "\nOpcion no valida" << endl;
            }
            else
            {
                cout << "\n**Hasta Luego, Vuelva Pronto**" << endl;
                break;
            }
        }
        cout << "\n<<<<<Por favor presione una tecla para continuar>>>>>";
        cin.ignore();
        getch();
        system("cls");
    }
}
