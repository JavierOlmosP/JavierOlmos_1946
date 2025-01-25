#include <iostream>
using namespace std;
main ()
{
  int Inferior, Superior, num;
    int sumaDentroIntervalo = 0, fueraIntervalo = 0;
    bool igualLimite = false;

    cout << "Introduce el limite del intervalo inferior : ";
    cin >> Inferior;
    cout << "Introduce el limite del intervalo superior : ";
    cin >> Superior;

    
    while (Inferior >= Superior) 
    {
        cout << "El limite inferior debe ser menor que el limite superior. Vuelve a introducir los limites." << endl;
        cout << "Introduce el limite del intervalo inferior: ";
        cin >> Inferior;
        cout << "Introduce el limite del intervalo superior: ";
        cin >> Superior;
    }


    cout << "Introduce los numeros (termina cuando ingreses 0): " << endl;
    while (true) 
    {
        cin >> num;

        if (num == 0) 
        {
            break;  
        }

        if (num > Inferior && num < Superior) 
        {
            sumaDentroIntervalo += num;  
        } 
        else 
        {
            fueraIntervalo++;  
        }

       
        if (num == Inferior || num == Superior) 
        {
            igualLimite = true;
        }
    }

    //  resultados
    cout << "La suma de los numeros dentro del intervalo (abierto) es: " << sumaDentroIntervalo << endl;
    cout << "Cantidad de numeros fuera del intervalo: " << fueraIntervalo << endl;

    if (igualLimite) 
    {
        cout << "Se ha introducido un numero igual a los limites del intervalo." << endl;
    } 
    else 
    {
        cout << "No se ha introducido ningun numero igual a los limites del intervalo." << endl;
    }
}