// 14. Diseñar e implementar un programa que solicite a su usuario un valor no negativo n y visualice la siguiente salida
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Ingrese un numero: ");
    scanf("%i", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%i", j);
        }
        printf("\n");
    }

    return 0;
}