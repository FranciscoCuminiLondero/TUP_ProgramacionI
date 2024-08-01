#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][2];
    int determinante;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Ingrese fila %d columna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Determinante: \n");
    determinante = matriz[0][0] * matriz[1][1] - matriz[1][0] * matriz[0][1];
    printf("%d", determinante);

    return 0;
}