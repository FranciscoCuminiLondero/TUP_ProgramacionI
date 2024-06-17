// 2- Ingresar tres valores, sumarlos e imprimir esa suma.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1;
    int num2;
    int num3;

    printf("Ingrese el primer numero\n");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero\n");
    scanf("%i", &num2);

    printf("Ingrese el terer numero\n");
    scanf("%i", &num3);

    printf("El resultado de sumar %i + %i + %i es %i\n", num1, num2, num3, num1 + num2 + num3);

    system("pause");
}