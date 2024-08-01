#include <stdlib.h>
#include <stdio.h>

int main()
{
    int vector[6];
    int suma_vector;
    int num_mayor;
    int contador_veinte;

    vector[0] = 10;
    vector[1] = 20;
    vector[2] = 5;
    vector[3] = 15;
    vector[4] = 30;
    vector[5] = 20;

    num_mayor = 0;
    contador_veinte = 0;
    suma_vector = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Indice: %i Valor: %i\n", i, vector[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        suma_vector = suma_vector + vector[i];
    }

    printf("El total del vector es de %i\n", suma_vector);

    for (int i = 0; i < 6; i++)
    {
        if ((i % 2) != 0)
        {
            printf("El contenido de la posicion %i es %i\n", i, vector[i]);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        if (vector[i] > num_mayor)
        {
            num_mayor = vector[i];
        }
    }

    printf("El numero mayor es: %i\n", num_mayor);

    for (int i = 0; i < 6; i++)
    {
        if (vector[i] == 20)
        {
            contador_veinte++;
        }
    }
    if (contador_veinte == 1)
    {
        printf("El numero 20 aparece: %i vez\n", contador_veinte);
    }
    else
    {
        printf("El numero 20 aparece: %i veces\n", contador_veinte);
    }
}