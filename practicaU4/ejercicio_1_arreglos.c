#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[7];

    arreglo[0] = 1;
    arreglo[1] = 2;
    arreglo[2] = 3;
    arreglo[3] = 4;
    arreglo[4] = 5;
    arreglo[5] = 6;
    arreglo[6] = 7;

    for (int i = 0; i < 7; i++)
    {
        printf("%i ", arreglo[i]);
    }
    return 0;
}