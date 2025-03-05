#include <iostream>
#include <fstream> //libreria para manipular archivos de texto
using namespace std;
int main(){
    ofstream archivoSalida; //comando para crear un nuevo archivo de texto, es este caso con nombre ejemplo.txt, se debe poner el nombre y la extension
    archivoSalida.open("ejemplo.txt"); 
    if(archivoSalida.is_open()){
        archivoSalida << "Hola mundo!" << endl;
        archivoSalida << "Esto es una prueba." << endl;
        archivoSalida << "Linea 3." << endl;
        archivoSalida.close();
        cout << "Texto escrito en el archivo con exito." << endl;
    } else
        cout << "No se pudo abrir el archivo." << endl;
    return 0;
}