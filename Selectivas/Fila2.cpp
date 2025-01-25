#include <iostream>
using namespace std;

main()
{
    int n1, n2, n3;
    cout<<"ingrese el primer numero: ";
    cin>>n1;
    cout<<"Ingrese el segundo numero: ";
    cin>>n2;
    cout<<"Ingrese el tercer numero: ";
    cin>>n3;

    int d1=n1;
    n1 = n2;
    n2 = n3;
    n3 = d1;
    cout << "El nuevo primero numero es: "<<n1<<endl; 
    cout << "El nuevo segundo numero es: "<<n2<<endl;
    cout << "El nuevo tercer numero es: "<<n3<<endl;


}