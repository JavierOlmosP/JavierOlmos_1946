#include <iostream>
using namespace std;

int main()
{
    int limS, limI, n, suma = 0, fuera = 0;
    bool limite = false;

   cout << "Ingresa el limite superior: ";
        cin >> limS;
        cout << "Ingresa el limite inferior: ";
        cin >> limI;

    
    while (limI > limS) 
    {
        cout << "El limite inferior debe ser menor que el limite superior. Vuelve a introducir los limites." << endl;
        cout << "Introduce el limite del intervalo superior: ";
        cin >> limS;
        cout << "Introduce el limite del intervalo inferior: ";
        cin >> limI;
    }

    cout << "Introduce los numeros (si no deseas ingresar mas solo digita 0): " << endl;

    while (true) 
    {
        cin >> n;

        if (n == 0) 
        {
            break; 
        }

        if (n > limI && n < limS) 
        {
            suma += n;  
        } 
        else 
        {
            fuera++; 
        }

        
        if (n == limI || n == limS) 
        {
            limite = true;
        }
    }

    
    cout << "la suma de los numeros que estan dentro del intervalo de tipo abierto es: " << suma << endl;
    cout << "Cantidad de numeros que estan fuera del intervalo: " << fuera << endl;


    if (limite) 
    {
        cout << "Se ha introducido un numero igual a los limites del intervalo." << endl;
    } 
    else 
    {
        cout << "No se ha introducido ningun numero igual a los limites del intervalo." << endl;
    }
}