#include <iostream>
using namespace std;

int main()
{
    int limS, limI, suma, n;
    while (limS < limI)
    {
        cout << "Ingresa el limite superior: ";
        cin >> limS;
        cout << "Ingresa el limite inferior: ";
        cin >> limI;
        if (limS > limI)
        {
            break;
        } 
        
    }
    cout << "la suma de los numeros que estan dentro del intervalo es: " << endl;
    while (n!=0)
    {
        cout << "Ingrese un numero: ";
        cin >> n;
        if (n==limS && n==limI)
        {
            cout << "Se ha introducido un valor igual a los limites del intervalo";
        else 
            break;
        }

    } 
}
    
    