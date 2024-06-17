// 1- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en pantalla.

#include <stdlib.h>
#include <stdio.h>

void main()
{
    int num1;
    int num2;

    printf("Ingresar el primer numero\n");
    scanf("%d", &num1);

    printf("Ingresar el segundo numero\n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("El primer numero %d es mayor al segundo numero %d", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("El segundo numero %d es mayor al primer numero %d", num2, num1);
    }

    else
    {
        printf("El primer numero %d y el segundo numero %d. Son iguales.", num1, num2);
    }

    system("pause");
}