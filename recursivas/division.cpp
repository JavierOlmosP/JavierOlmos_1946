#include <iostream>
using namespace std;

int dividir(int a, int b, int &cociente)
{
    if(b == 0)
        return -1;
    if(a < b)
    return a;
    else
    {
        cociente++;
        return dividir(a - b, b, cociente);
    }
}

int main()
{
    int diviendo, divisor, cociente = 0, residuo = 0;
    cout << "Introduce el dividendo: "; cin >> diviendo;
    cout << "Introduce el divisor: "; cin >> divisor;
    residuo = dividir(diviendo, divisor, cociente);
    cout << "El residuo: " << residuo << endl;
    cout << "El cociente: " << cociente << endl;
}