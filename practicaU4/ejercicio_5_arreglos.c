#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marcas[10];
    int acum_mayor = 0, acum_menor = 0;
    float suma = 0, promedio = 0;

    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Ingrese la marca del corredor %i: ", i + 1);
        scanf("%i", &marcas[i]);
        suma = suma + marcas[i];
    }

    promedio = suma / i;

    for (int j = 0; j < 10; j++)
    {
        if (marcas[j] > promedio)
        {
            acum_mayor++;
        }
        else
        {
            acum_menor++;
        }
    }

    printf("El promedio de marcas es: %.2f\n", promedio);
    printf("%d corredores tiene una marca mayor al promedio\n", acum_mayor);
    printf("%d corredores tiene una marca menor al promedio\n", acum_menor);

    return 0;
}