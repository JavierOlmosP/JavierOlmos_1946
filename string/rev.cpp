#include <iostream>
#include "../Librerias/strings.h"
using namespace std;

int main(){
    string palabras;
    cout << "Ingrese una palabra: "; getline(cin, palabras);
    reemplazar(palabras);
    cout << "La cadena final es: " << palabras << endl;
    return 0;
}