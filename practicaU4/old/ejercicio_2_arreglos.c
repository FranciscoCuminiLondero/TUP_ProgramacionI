#include <stdlib.h>
#include <stdio.h>

int main()
{
    int array[5];
    int suma;
    float promedio = 0;

    suma = 0;
    array[0] = 5;
    array[1] = 5;
    array[2] = 5;
    array[3] = 5;
    array[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        suma = suma + array[i];
    }

    promedio = suma / 5;
    printf("La suma de los componentes es: %i\n", suma);
    printf("El promedio de los componentes es: %.2f\n", promedio);
}