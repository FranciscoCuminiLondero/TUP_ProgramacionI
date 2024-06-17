#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void busquedaDicotomica(int arreglo[], int dim, int buscar);

int main()
{
    int arreglo[] = {1, 3, 5, 7, 9, 11, 12, 15, 17, 19};
    int dim = sizeof(arreglo);
    printf("%i\n", dim);

    int buscar = 3;

    busquedaDicotomica(arreglo, dim, buscar);

    return 0;
}

void busquedaDicotomica(int arreglo[], int dim, int buscar)
{
    int i, centro, inferior, superior;
    bool encontrado;

    inferior = 0;
    superior = dim - 1;
    encontrado = false;

    do
    {
        centro = trunc((inferior + superior) / 2);

        if (arreglo[centro] == buscar)
        {
            printf("El elemento %d fue encontrado en la posicion %i", buscar, centro + 1);
            encontrado = true;
        }
        else if (arreglo[centro] < buscar)
        {
            inferior = centro + 1;
        }
        else
        {
            superior = centro - 1;
        }

        if (inferior > superior)
        {
            printf("Numero %d no encontrado", buscar);
        }

    } while (!encontrado && inferior <= superior);
}
