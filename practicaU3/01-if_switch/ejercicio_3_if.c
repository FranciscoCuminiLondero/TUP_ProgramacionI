// 3- Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;

    printf("Ingrese un numero\n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Es nulo\n");
    }
    else
    {
        if (num > 0)
        {
            printf("Es positivo\n");
        }
        else
        {
            printf("Es negativo\n");
        }
    }

    system("pause");
}