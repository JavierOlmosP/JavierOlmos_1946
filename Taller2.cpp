#include <iostream>
using namespace std;

int main()
{
    int limS, limI, n, suma = 0, fuera = 0;
    bool limite = false;

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

    // Analizar que el limite inferior sea menor que el superior
    while (Inferior >= Superior) 
    {
        cout << "El limite inferior debe ser menor que el limite superior. Vuelve a introducir los limites." << endl;
        cout << "Introduce el limite del intervalo inferior: ";
        cin >> Inferior;
        cout << "Introduce el limite del intervalo superior: ";
        cin >> Superior;
    }

    // ingresar números hasta que se ingrese un 0
    cout << "Introduce los numeros (termina cuando ingreses 0): " << endl;
    while (true) 
    {
        cin >> num;

        if (num == 0) 
        {
            break;  // Salir del bucle si el número ingresado es 0
        }

        if (num > Inferior && num < Superior) 
        {
            sumaDentroIntervalo += num;  // Sumar si está dentro del intervalo abierto
        } 
        else 
        {
            fueraIntervalo++;  // Contar si está fuera del intervalo
        }

        // Verificar si el número es igual a algún límite
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

    cout << "Introduce los numeros (si no deseas ingresar mas solo digita 0): " << endl;
    
    while (true)
    {
        
        cin >> n;

        if (n==0)
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

    }

    cout << "la suma de los numeros que estan dentro del intervalo de tipo abierto es: " << suma << endl;
    cout << "Cantidad de numeros que estan fuera del intervalo: " << fuera << endl;

}
