#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[5];
    int acum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el numero %i: ", i + 1);
        scanf("%i", &arreglo[i]);
        acum = acum + arreglo[i];
    }

    printf("Suma: %i", acum);
    return 0;
}