/*Dados el radio y la altura de un cilindro, si la altura es mayor al radio calcule y muestre
el valor del volumen del cilindro, caso contrario muestre el valor del área del cilindro.*/

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	float radio, altura, volumen, area;
	
	cout << "Inserte el radio ";
	cin >> radio; 
	cout << "Inserte la altura "; 
	cin >> altura;
	
	volumen = M_PI * pow(radio, 2) * altura;
	area = (2 * M_PI * pow(radio, 2)) + (2 * M_PI * radio * altura);

	if (altura > radio)
	{
		cout << "El volumen del cilindro es " << volumen << endl;
	}
	else 
	{
		cout << "El area del cilindro es " << area << endl;
	}	

}