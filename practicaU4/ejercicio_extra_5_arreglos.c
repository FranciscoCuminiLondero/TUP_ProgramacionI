#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cantidad;

    printf("Ingrese la cantidad de invitados: ");
    scanf("%d", &cantidad);

    char invitados[cantidad][2][15];

    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingrese el nombre del invitado %d: ", i + 1);
        scanf("%s", &invitados[i][0]);
        printf("Ingrese el tipo de menu: 1.Tradicional 2.Vegano o 3.Sin TACC ");
        scanf("%s", &invitados[i][1]);

        if (atoi(invitados[i][1]) == 1)
        {
            strcpy(invitados[i][1], "Tradicional");
        }
        else if (atoi(invitados[i][1]) == 2)
        {
            strcpy(invitados[i][1], "Vegano");
        }
        else if (atoi(invitados[i][1]) == 3)
        {
            strcpy(invitados[i][1], "Sin TACC");
        }
    }

    for (int i = 0; i < cantidad; i++)
    {
        printf("%d. ", i + 1);
        for (int j = 0; j < 2; j++)
        {
            printf("%s ", invitados[i][j]);
        }
        printf("\n");
    }

    return 0;
}