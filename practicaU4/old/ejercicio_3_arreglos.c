#include <stdlib.h>
#include <stdio.h>

int main()
{
    int array[5];
    int contador = 0;

    array[0] = 5;
    array[1] = 5;
    array[2] = 5;
    array[3] = 5;
    array[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un numero entero:\n");
        scanf("%i", &array[i]);
        if (array[i] == 5)
        {
            contador++;
        }
    }

    if (contador == 1)
    {
        printf("Se repite el numero 5: %i vez\n", contador);
    }
    else
    {
        printf("Se repite el numero 5: %i veces\n", contador);
    }
}