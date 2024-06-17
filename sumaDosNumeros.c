#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int suma;

    printf("Ingrese un numero entero\n");
    scanf("%d", &numero1);

    printf("Ingrese un numero entero\n");
    scanf("%d", &numero2);

    printf("el valor de la variable numero 1 es %d\n", numero1);
    printf("el valor de la variable numero 2 es %d\n", numero2);

    suma = numero1 + numero2;

    printf("El resultado de sumar %d + %d es igual a %d\n", numero1, numero2, suma);

    system("pause");
}

/*
    %d - para varuavkes de tipo int
    %c - para varuavkes de tipo char
    %f - para varuavkes de tipo float
    %lf - para varuavkes de tipo double

*/