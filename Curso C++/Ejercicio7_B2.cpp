#include <iostream>
#include <math.h>
using namespace std;

main(){

    float a, b, c = 0;

    cout<<"Ingrese el valor de un cateto: "; cin>>a;
    cout<<"Ingrese el valor del otro cateto: "; cin>>b;

    c = (sqrt(pow(a,2)+pow(b,2)));
    cout.precision(2);
    cout<<"El valor de la hipotenusa es: "<<c<<endl;




    return 0;
}