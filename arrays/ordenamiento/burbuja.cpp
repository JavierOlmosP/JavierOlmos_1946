#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
 
 void llenarvector(int v[], int n){
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v[i] = rand()%20+1;
        //cin>>v[i];
    }
 }
 
 int ordenarburbujav1(int v[], int n)
 {	
    int aux, contador = 0;
	cout << "vector recibido: " <<endl;
	for(int i=0; i<n;i++)
	{
		cout << v[i] << " "; 
	}
	cout<<endl;
    for (int i = 0; i < n;i++)
	{
    	for (int j = 0; j < n-1; j++)
		{
        	contador++;
        	if (v[j] > v[j+1])
			{
            	aux = v[j];
            	v[j]=v[j+1];
            	v[j+1] = aux;
    		}	
    	}
	}	
	return contador;
}

int ordenarburbujav2(int v[], int n)
{	
	int aux, contador = 0, mejora = 1; 
	cout << "vector recibido: " <<endl;
	for(int i=0; i<n;i++)
	{
		cout << v[i] << " "; 
	}
	cout<<endl;
    for (int i = 0; i < n;i++)
	{
    	for (int j = 0; j < n-mejora; j++)
		{
        	contador++;
        	if (v[j] > v[j+1])
			{
            	aux = v[j];
            	v[j]=v[j+1];
            	v[j+1] = aux;
    		}	
    	}
    	mejora++;
	}	
	return contador;
}

int ordenarburbujav3(int v[], int n)
{	
    int aux, contador = 0, mejora = 1;
    bool cambio=true;
    cout << "vector recibido: " <<endl;
	for(int i=0; i<n;i++)
	{
		cout << v[i] << " "; 
	}
	cout<<endl;
    for (int i = 0; i < n && cambio;i++)
	{
		cambio=false;
    	for (int j = 0; j < n-mejora; j++)
		{
        	contador++;
        	if (v[j] > v[j+1])
			{
            	aux = v[j];
            	v[j]=v[j+1];
            	v[j+1] = aux;
            	cambio=true;
    		}	
    	}
    	mejora++;
	}	
	return contador;
}

int ordenarburbujav4(int v[], int n) //Una mejora de mi autoria
{	
    int aux, contador = 0;
    cout << "vector recibido: " <<endl;
	for(int i=0; i<n;i++)
	{
		cout << v[i] << " "; 
	}
	cout<<endl;
    for (int i = 0; i < n;i++)
	{
    	for (int j = 0; j < n-1; j++)
		{
        	contador++;
        	if (v[j] > v[j+1])
			{
            	aux = v[j];
            	v[j]=v[j+1];
            	v[j+1] = aux;
            	
    		}	
    	}
		return contador;	
	}	
	
}

void muestravector(int v [], int n)
{
	for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }    
}

void clonarVector(int origen[], int destino[], int n) 
{
	for (int i = 0; i < n; i++) 
	{
		destino[i] = origen[i];
	}
}

 main()
 {
    int ne;
    cout<<"numeros de elementos: ";
    cin>> ne;
    int vec[ne], original[ne];
    llenarvector(vec,ne);
    cout<<"vector original: ";
    muestravector(vec,ne);
    cout<<endl;
    clonarVector(vec, original, ne);
    cout<<"\nEl numero de comparaciones burbuja v1 = " << ordenarburbujav1(original,ne)<<endl;
    clonarVector(vec, original, ne);
    cout<<"\nEl numero de comparaciones burbuja v2 = " << ordenarburbujav2(original,ne)<<endl;
    clonarVector(vec, original, ne);
    cout<<"\nEl numero de comparaciones burbuja v3 = " << ordenarburbujav3(original,ne)<<endl;
    clonarVector(vec, original, ne);
    cout<<"\nEl numero de comparaciones burbuja v4 = " << ordenarburbujav4(original,ne)<<endl;
    cout<<"vector ordenado: "<<endl;
    muestravector(original,ne);
    




	return 0;
}

