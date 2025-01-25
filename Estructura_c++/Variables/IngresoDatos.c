#include <stdio.h>
main()
{
    int i;
    short valor;
    char letra;
    float peso;
    double altura;
    printf("Ingrese un valor entero:\t");
    scanf ("%d",&i);
    printf("Ingrese un valor short\t");
    scanf("%d", &valor);
    printf("Ingrese un valor char\t");
    fflush(stdin);
    scanf("%c", &letra);
    printf("Ingrese un valor float\t");
    scanf("%f", &peso);
    printf("Ingrese un valor double\t");
    scanf("%lf", &altura);

}