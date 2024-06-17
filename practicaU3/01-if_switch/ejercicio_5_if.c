// 5- Escriba un programa que pida ingresar un número y a continuación escriba en la consola si el mismo es par o impar

#include <stdlib.h>
#include <stdio.h>

void main()
{
    int num;

    printf("Ingrese un numero\n");
    scanf("%i", &num);

    if (num % 2 == 0)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }
    system("pause");
}