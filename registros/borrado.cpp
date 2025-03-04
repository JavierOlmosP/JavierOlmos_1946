#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> numeros;
    for(int i = 0;i < 10;i++){
        numeros[i] = i + 1;
    }
    cout << "Elementos del vector: " << endl;
    for(auto x:numeros){
        cout << x << " ";
    }
    cout << "Tamaño del vector: " << numeros.size();
}