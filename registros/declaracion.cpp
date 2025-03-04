#include <iostream>
#include <vector>
using namespace std;
int main(){
    int i = 0;
    vector <int> datos;
    vector <float> notas(3, 4.5);//Inicializa con 3 elementos de 4.5
    datos.push_back(10);
    datos.push_back(20);
    for(int i = 0;i < datos.size();i++){
        cout << datos[i] << " ";
    }
    cout << endl;
    for(auto x:datos){
        cout << x << " ";
    }
    cout << "\n";
    for(auto y:notas){
        cout << y << " ";
    }
}