#include <iostream>
#include <string>
using namespace std;


void reemplazarCadena(string& cadena, const string& objetivo, const string& reemplazo) {
    int pos = cadena.find(objetivo);
    if (pos != string::npos) {
        cadena.replace(pos, objetivo.size(), reemplazo);
    }
}

int main() {
    string cadena, reemplazo, cadenaFinal;
    cout << "Ingresa una frase: "; getline(cin, cadena);
    cout << "La cadena ingresada es: " << cadena << endl;
    cout << "Ingresa el texto que deseas reemplazar: "; getline(cin, reemplazo);
    cout << "Ingresa lo que deseas reemplazar: "; getline(cin, cadenaFinal);
    reemplazarCadena(cadena, reemplazo, cadenaFinal);
    cout << "Cadena modificada: " << cadena << endl;
    return 0;
}


