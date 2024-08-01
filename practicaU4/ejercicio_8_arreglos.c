#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][3];
    int suma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese el numero fila %i columna %i: ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
            suma += matriz[i][j];
            printf("Total: %i\n", suma);
        }
    }

    return 0;
}