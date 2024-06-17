// 1- Ingresar dos valores enteros, sumarlos e imprimir esta suma.

#include <stdio.h>  // printf - scanf
#include <stdlib.h> // system("pause")

void main()
{
    int num1;
    int num2;

    printf("Ingrese un numero entero\n");
    scanf("%i", &num1);

    printf("Ingrese otro numero entero\n");
    scanf("%i", &num2);

    printf("El resultado de %i + %i es %i\n", num1, num2, num1 + num2);

    system("pause");
}
