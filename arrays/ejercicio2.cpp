#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaDatos(int v[], int ne)
{
    srand(time(NULL)); //Funcion semilla para general numeros aleatorios
    for(int i = 0; i < ne; i++)
    {
        v[i] = rand()%20+1;
    }
}
void verDatos(int v[], int ne)
{
    for(int i = 0; i < ne; i++)
    {
        cout << v[i] << " ";
    }
}
float sumaPromedioCifras(int v[], int ne)
{
    int suma = 0;
    for(int i = 0; i < ne; i++)
    {
        suma += v[i];
    }
    return (float)suma/ne;
}
int contarDebajoPromedio(int v[], int ne, float promedio)
{
    int contar = 0;
    for(int i = 0; i < ne; i++)
    {
        if(v[i] < promedio)
        {
            contar++;
        }
    }
}
void guardaElementosMenores(int v[], int ne, float promedio, int lista[])
{
    int j = 0;
    for(int i = 0; i < ne; i++)
    {
        if(v[i] < promedio)
        {
            lista[i] = v[i];
            i++;
        }
    }
}

main()
{
    int ne, menores;
    float promedioNumeros;
    cout << "Cuantos elementos tiene el vector?: "; cin >> ne;
    int vector[ne];
    llenaDatos(vector, ne);
    verDatos(vector, ne);
    promedioNumeros = sumaPromedioCifras(vector, ne);
    cout << "\nEl promedio de los datos generados es = " << promedioNumeros << endl;
    menores = contarDebajoPromedio(vector, ne, promedioNumeros);
    cout << "Hay " << menores << " numeros por debajo del promedio " << endl;
    int listaMenores[menores];
    guardaElementosMenores(vector, ne , promedioNumeros, listaMenores);
    verDatos(listaMenores, menores);
}