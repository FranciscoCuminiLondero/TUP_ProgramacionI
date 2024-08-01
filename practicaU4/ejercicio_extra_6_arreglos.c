#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese fila %d columna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Elementos de la diagonal principal: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", matriz[i][i]);
    }

    return 0;
}