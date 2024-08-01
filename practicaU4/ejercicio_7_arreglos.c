#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arreglo[3][4][50];

    strcpy(arreglo[0][0], "Argentina");
    strcpy(arreglo[0][1], "Buenos Aires");
    strcpy(arreglo[0][2], "Rosario");
    strcpy(arreglo[0][3], "Cordoba");

    strcpy(arreglo[1][0], "Colombia");
    strcpy(arreglo[1][1], "Cali");
    strcpy(arreglo[1][2], "Bogota");
    strcpy(arreglo[1][3], "Santa Marta");

    strcpy(arreglo[2][0], "Brasil");
    strcpy(arreglo[2][1], "Brasilia");
    strcpy(arreglo[2][2], "Rio de Janeiro");
    strcpy(arreglo[2][3], "San Pablo");

    printf("Pais Ciudad 1 Ciudad 2 Ciudad 3\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%s ", arreglo[i][j]);
        }
        printf("\n");
    }

    return 0;
}