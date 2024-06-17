#include <stdio.h>
#include <stdlib.h>

#define tam 13

void main()
{
    int miArray[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Ingrese el valor del elemento %d\n", i + 1);
        scanf("%d", &miArray[i]);
    }

    // miArray[15] = 28; // error

    for (int i = 0; i < tam; i++)
    {
        printf("Indice: %d, Valor: %d\n", i, miArray[i]);
    }
}