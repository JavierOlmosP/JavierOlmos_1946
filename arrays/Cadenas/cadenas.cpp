#include <iostream>
using namespace std;

void llenarCadena(char cad[], int n = 50){
    cout << "Ingresa una cadena de caracteres: "; cin.getline(cad, n); cin.clear();
}
int longitudCadena(char cad[]){
    int contador = 0;
    for(int i = 0;cad[i] != '\0';i++)
        contador++;
    return contador; 
}
int contarPalabras(char cad[]){
    int palabras = 0, aux[];
    for(int i = 0; cad[i] != '\0';i++){
        if(cad[i] == ' ' && (cad[i+1] != ' ' && (cad[i+1] != '\0'))){
            palabras++;
        }
    
    }
    (palabra) ? palabras++:palabras;
    return palabras;
}
int main(){
    char palabras[50];
    llenarCadena(palabras);
    cout << "La cadena ingresada es: " << palabras << endl;
    cout << "La longitud de la cadena es: " << longitudCadena(palabras) << endl;
    cout << "La cantidad de palabras " << contarPalabras(palabras) << endl;
    return 0;
}