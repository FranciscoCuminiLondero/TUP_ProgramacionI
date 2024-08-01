#include <stdlib.h>
#include <stdio.h>

int main()
{
    int array[5];

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("Indice: %i Valor: %i\n", i, array[i]);
    }
}