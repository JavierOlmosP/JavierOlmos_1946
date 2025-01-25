#include <iostream>
using namespace std;

main(){
    float a,b,c,d,media = 0;

    cout << "Ingrese la calificacion del primer alumno: "; cin >> a;
    cout << "Ingrese la calificacion del segundo alumno: "; cin >> b;
    cout << "Ingrese la calificacion del tercer alumno: "; cin >> c;
    cout << "Ingrese la calificacion del cuarto alumno: "; cin >> d;

    media = (a+b+c+d)/4;

    cout<<"\nLa nota final media de los alumnos es: "<<media<<endl;


    return 0;
}