#include <iostream>
#include <string>
using namespace std;

int main(){
    string nombre = "Pedro";
    string apellido("Perez");
    string inicial(1, 'p');
    string cadena = "Juan Jose Arturo";
    string nombre2(cadena, 5, 4);//Esto quiere decir que del string cadena coge el siguiente del caracter en la posicion 5 y apartir de ese cuenta 4 caracteres y eso toma el nuevo valor
    cout << "La longitud de nombre2 es: " << nombre2.length() << endl; //Esto bota la longitud que es este caso seria el 4 seleccionada en la parte de arriba
    inicial += "edro";
    cout << inicial[0] << endl;
    cout << inicial << endl;
    inicial = "cad";
    cout << inicial << endl;
    cout << nombre2 << endl;
    return 0; 
}