/*Lea la cantidad de Kw que ha consumido una familia y el precio Kw, si la cantidad es mayor a 700,
incremente el precio en 5% para el exceso de kw sobre 700 Muestre el valor total a pagar.*/

#include <iostream>
using namespace std;

int main()
{
    float consumo, precio, incremento;

    cout << "Ingrese la cantidad de Kw consumidos ";
    cin >> consumo;

    precio = 9.4 * consumo;
    incremento = precio * 1.05;

    if (consumo > 700)
    {
        cout << "El total a pagar " << incremento << endl;
    }
    
}


