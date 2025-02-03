#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
 
void llenarvector(int v[], int n){
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v[i] = rand()%20+1;
        //cin>>v[i];
    }
}

void muestravector(int v [], int n)
{
	for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }    
}

int seleccion(int v[], int n){
    int contar = 0, aux;
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            contar++;
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    return contar;
}

int seleccionV2(int v[], int n){
    int contar = 0, aux;
    bool cambios = true;
    for(int i = 0;i < n - 1 && cambios;i++){
        cambios = false;
        for(int j = i + 1;j < n;j++){
            contar++;
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                cambios = true;
            }
        }
    }
    return contar;
}

int main(){
    int ne, comparaciones;
    cout << "Ingrese el numero de elementos: "; cin >> ne;
    int vec[ne];
    llenarvector(vec, ne);
    cout << "Vector original:" << endl;
    muestravector(vec, ne);
    comparaciones = seleccion(vec, ne);
    cout << "\nVector Ordenado: " << endl;
    muestravector(vec, ne);
    cout << "\nEl numero de comparaciones = " << comparaciones;
    cout << "\nNumero de comparaciones en v2: " << seleccionV2(vec, ne);
    return 0; 
}