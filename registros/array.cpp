#include <iostream>
using namespace std;

struct persona{
    int edad;
    string nombre;
    float estatura;
};
void ingresarRegistro(persona &per1){
    cout << "Ingrese el nombre: "; getline(cin, per1.nombre);
    cout << "Ingrese la edad: "; cin >> per1.edad;
    cout << "Ingrese la estatura: "; cin >> per1.estatura;
}
void mostrarRegistro(persona per1){
    cout << "Nombre: " << per1.nombre << endl;
    cout << "Edad: " << per1.edad << endl;
    cout << "Altura: " << per1.estatura << endl;
}
int main(){
    persona p1 = {};
    ingresarRegistro(p1);
    mostrarRegistro(p1);
    return 0;
}