#include <iostream>
#define GRAVEDAD 9.8
using namespace std;

main()
{
    const int ALTURA = 25;
    const float PI = 3.1416;
    const char LETRA = 'a';
    const string PALABRA = "Hola mundo";
    enum {AMARILLO=1, AZUL, ROJO}; //constantes numericas de tipo entero
    cout << "Las constantes definidas son:\n";
    cout << "altura = " << ALTURA << endl;
    cout << "pi = " << PI << endl;
    cout << "letra = " << LETRA << endl;
    cout << "palabra = " << PALABRA << endl;
    cout << "amarillo = " << AMARILLO << endl;
    cout << "azul = " << AZUL << endl;
    cout << "rojo = " << ROJO << endl;
    cout << "La gravedad es " << GRAVEDAD << endl;
}