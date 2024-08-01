#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[10];
    int mayor = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el numero %i: ", i + 1);
        scanf("%i", &arreglo[i]);
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }
    }

    printf("El numero mayor es: %i", mayor);
    return 0;
}