#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el numero %i: ", i + 1);
        scanf("%i", &arreglo[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", arreglo[i]);
    }
    return 0;
}