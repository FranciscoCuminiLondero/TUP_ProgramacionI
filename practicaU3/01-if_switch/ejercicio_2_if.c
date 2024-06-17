// 2- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en pantalla. Informar también si los números son iguales.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1;
    int num2;

    printf("Ingresar un numero\n");
    scanf("%d", &num1);

    printf("Ingresar otro numero\n");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("El numero %d es igual a %d\n", num1, num2);
    }
    else
    {
        if (num1 > num2)
        {
            printf("El numero %d es mayor a %d\n", num1, num2);
        }
        else
        {
            printf("El numero %d es mayor a %d\n", num2, num1);
        }
    }

    system("pause");
}