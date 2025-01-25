#include <iostream>
using namespace std;

main()
{
    int num, r, num2;
    cout << "ingrese el primer numero ";
    cin >> num;
    cout << "Ingrese un segundo numero ";
    cin >> num2;
    r = num % num2;
    if (r == 0)
    {
        cout << "El numero " << num << " es divisible para " << num2 << endl;
    }
    else
    {
        cout << num << " no es divisible para " << num2 << endl;
    }
    num = 0;
}