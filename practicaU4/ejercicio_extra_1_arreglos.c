#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam;

    printf("Ingrese el tamano de los arreglos: ");
    scanf("%d", &tam);

    while (tam < 2)
    {
        printf("ERROR: Ingrese un tamano de los arreglos valido: ");
        scanf("%d", &tam);
    }

    int arr1[tam];
    int arr2[tam];
    int arr3[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Ingrese el numero %d del arreglo 1: ", i + 1);
        scanf("%d", &arr1[i]);
        printf("Ingrese el numero %d del arreglo 2: ", i + 1);
        scanf("%d", &arr2[i]);

        arr3[i] = arr1[i] + arr2[i];
    }

    printf("Arreglo 3 -> { ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("}");

    return 0;
}