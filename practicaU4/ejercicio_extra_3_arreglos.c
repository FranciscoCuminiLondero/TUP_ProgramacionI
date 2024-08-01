#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad;

    printf("Ingrese la cantidad de invitados: ");
    scanf("%d", &cantidad);

    char invitados[cantidad][15];

    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingrese el nombre del invitado %d: ", i + 1);
        scanf("%s", invitados[i]);
    }

    printf("\nLista de invitados:\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("%d. %s\n", i + 1, invitados[i]);
    }

    return 0;
}