// 4- Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en pantalla.

#include <stdlib.h>
#include <stdio.h>

void main()
{
    int num1;
    int num2;
    int num3;

    printf("Ingresar el primer numero\n");
    scanf("%d", &num1);

    printf("Ingresar el segundo numero\n");
    scanf("%d", &num2);

    printf("Ingresar el tercer numero\n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("El primer numero %d es mayor que %d y %d\n", num1, num2, num3);
    }
    else
    {
        if (num2 > num3)
        {
            printf("El segundo numero %d es mayor que %d y %d\n", num2, num1, num3);
        }
        else
        {
            printf("El tercer numero %d es mayor que %d y %d\n", num3, num1, num2);
        }
    }

    system("pause");
}