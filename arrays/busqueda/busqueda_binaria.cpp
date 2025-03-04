#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../Librerias/arrays.h"
using namespace std;
using namespace vectorn;

/*void llenaDatos(int v[], int n){
    srand(time(NULL));
    for(int i = 0;i < n;i++){
        v[i] = rand() % 20 + 1;
        cout << v[i] << "\t";
    }
}*/
bool isBusquedaBinaria(int v[], int n, int elemento){
    int abajo = 0, arriba = n - 1, centro;
    while (abajo <= arriba){
        centro = (arriba + abajo) / 2;
        if (v[centro] == elemento){
            return true;
        } else if(v[centro] < elemento){
            abajo = centro + 1;
        } else{
            arriba = centro - 1;
        }
    }
    return false;
}
int main(){
    int ne, dato;
    cout << "\nNro de Elementos del Array: "; cin >> ne;
    int vector[ne];
    llenarVectorn(vector, ne, 20, 50);
    cout << "Datos Originales\n";
    verVector(vector, ne);
    ordenarburbujav3(vector, ne);
    cout << "\nVector Ordenado: " << endl;
    verVector(vector, ne);
    cout << "\n Ingrese el dato a buscar: "; cin >> dato;
    (isBusquedaBinaria(vector, ne, dato)) ? cout << "El elemento esta en el array" : cout << "El elemento no existe";
    return 0;
}