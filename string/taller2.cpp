#include <iostream>
using namespace std;


int main(){

    string cadena1 = ("informatica");
    string cadena4;
    const char *auxiliar;
    string cadena2(cadena1);//a cadena2 asigneme cadena1
    string cadena3(10, '*');//Repite 10 veces el *
    cout << cadena3 << endl;
    cadena1.push_back('z'); //permite añadir 1 caracter al final
    cout << cadena1 << endl;
    cadena1.at(0) = 'I'; //metodo at accede a un indice de la cadenaL1[0] 
    cout << cadena1 << endl;
    //usando el metodo front y back para cambiar los caracteres inicio y final
    cadena1.front()='i';
    cadena1.back()='A';
    cout << cadena1 << endl;
    auxiliar = cadena1.c_str();
    cout << "Auxiliar array char: " << auxiliar << endl;
    //metodo empty para conocer si una cadena esta vacia o no
    (cadena4.empty()) ? cout << "Cadena vacia\n" : cout << "Cadena no vacia\n";
    //tamaño maximo de caracteres que puede almacenar la cadena
    cout << "Tamano maximo: " << cadena1.max_size() << endl;
    //tamaño en bytes del objeto string que ocupa actualmente
    cout << "Capacidad: " << cadena1.capacity() << endl;
    //usando el metodo compara para comparar 2 cadenas
    cout << "cad1 = " << cadena1 << "cad2 = " << cadena2 << endl;
    cadena1 = "Mola";
    cadena2 = "Hola";
    int comparacion = cadena1.compare(cadena2);
    cout << "Comparacion: " << comparacion << endl;
    int encontrado = cadena1.find("sol");
    cout << "Encontrado = " << encontrado;
    (cadena1.find("ol") == string::npos) ? cout << "No encontrado" : cout << " Encontrado";
    string numerostr = "123";
    int numero = stoi(numerostr);
    cout << endl;
    cout << numero << endl;
    return 0;
}