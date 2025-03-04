#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int sumaDivisores(int num) 
{
    int suma = 1;
    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0) 
        {
            suma += i;
            if (i != num / i) 
            {
                suma += num / i;
            }
        }
    }
    return suma;
}

bool esAbundante(int num) 
{
    return sumaDivisores(num) > num;
}

bool esDeficiente(int num) 
{
    return sumaDivisores(num) < num;
}


bool sonAmigos(int num1, int num2) 
{
    return sumaDivisores(num1) == num2 && sumaDivisores(num2) == num1;
}

int main() {
    int opcion, num1, num2;

    do {

        cout << "Menu:\n";
        cout << "1. Verificar si un numero es abundante\n";
        cout << "2. Verificar si un numero es deficiente\n";
        cout << "3. Verificar si dos numeros son amigos\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: \n";
        cin >> opcion;

        switch (opcion) 
        {
            case 1:
                cout << "Ingrese un numero para verificar si es abundante: \n ";
                cin >> num1;
                if (esAbundante(num1)) {
                    cout << num1 << " es un numero abundante.\n";
                } else {
                    cout << num1 << " no es un numero abundante.\n";
                }
                break;

            case 2:
                cout << "Ingrese un numero para verificar si es deficiente: \n";
                cin >> num1;
                if (esDeficiente(num1)) {
                    cout << num1 << " es un numero deficiente.\n";
                } else {
                    cout << num1 << " no es un numero deficiente.\n";
                }
                break;

            case 3:
                cout << "Ingrese dos numeros para verificar si son amigos:\n";
                cout << "Numero 1: \n ";
                cin >> num1;
                cout << "Numero 2: \n";
                cin >> num2;
                if (sonAmigos(num1, num2)) {
                    cout << num1 << " y " << num2 << " son numeros amigos.\n";
                } else {
                    cout << num1 << " y " << num2 << " no son numeros amigos.\n";
                }
                break;

            case 4:
                cout << "Saliendo del programa.\n";
                break;

            default:
                cout << "Opcion no valida, intente de nuevo.\n";
        }

        cout << endl;

    } while (opcion!=4);
}
