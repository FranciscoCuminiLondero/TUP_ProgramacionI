#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ListaCorredores(char corredores[10][2][50]);
void ListaMejores(char corredores[10][2][50]);
void ListaPosiciones(char corredores[10][2][50]);

int main()
{
    char corredores[10][2][50];
    int opcionMenu;

    strcpy(corredores[0][0], "Pedro Gomez");
    strcpy(corredores[0][1], "7");

    strcpy(corredores[1][0], "Martin Ceres");
    strcpy(corredores[1][1], "6");

    strcpy(corredores[2][0], "Ernestina Diaz");
    strcpy(corredores[2][1], "1");

    strcpy(corredores[3][0], "Gaston Bautista");
    strcpy(corredores[3][1], "2");

    strcpy(corredores[4][0], "Dalma Alvarez");
    strcpy(corredores[4][1], "8");

    strcpy(corredores[5][0], "Patricio Fernandez");
    strcpy(corredores[5][1], "3");

    strcpy(corredores[6][0], "Faustina Martinez");
    strcpy(corredores[6][1], "10");

    strcpy(corredores[7][0], "Andrea Perez");
    strcpy(corredores[7][1], "9");

    strcpy(corredores[8][0], "Hilda Lopez");
    strcpy(corredores[8][1], "4");

    strcpy(corredores[9][0], "Leon Garcia");
    strcpy(corredores[9][1], "5");

    do
    {
        printf("\nMenu:\n");
        printf("1-Mostrar lista de corredores\n");
        printf("2-Mostrar los tres mejores\n");
        printf("3-Mostrar lista completa de resultados\n");
        printf("4-Salir\n");

        printf("\nIngrese una opcion del menu: ");
        scanf("%d", &opcionMenu);

        switch (opcionMenu)
        {
        case 1:
            ListaCorredores(corredores);
            break;
        case 2:
            ListaMejores(corredores);
            break;
        case 3:
            ListaPosiciones(corredores);
            break;
        case 4:
            printf("Hasta la proxima!");
            break;

        default:
            printf("ERROR: Opcion '%d' invalida\n", opcionMenu);
            break;
        }
    } while (opcionMenu != 4);

    return 0;
}

void ListaCorredores(char corredores[10][2][50])
{
    printf("\nLista de Corredores:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d. %s\n", i + 1, corredores[i][0]);
    }
    printf("\n");
}

void ListaMejores(char corredores[10][2][50])
{
    printf("\nLista de Mejores Corredores:\n");
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(corredores[i][1], "1") == 0)
        {
            printf("1. %s\n", corredores[i][0]);
        }
        if (strcmp(corredores[i][1], "2") == 0)
        {
            printf("2. %s\n", corredores[i][0]);
        }
        if (strcmp(corredores[i][1], "3") == 0)
        {
            printf("3. %s\n", corredores[i][0]);
        }
    }
    printf("\n");
}

void ListaPosiciones(char corredores[10][2][50])
{
    printf("\nLista de Posiciones:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d. ", i + 1);
        for (int j = 0; j < 2; j++)
        {
            printf("%s ", corredores[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}