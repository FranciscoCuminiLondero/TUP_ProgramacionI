// 7. Diseñe un algoritmo que sume los 20 primeros números impares.

#include <stdio.h>

int main()
{
    int suma = 0;
    int contador = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0 && contador < 20)
        {
            suma = suma + i;
            contador++;
            printf("Numero impar %i: %i\n", contador, i);
        }
    }

    printf("\nSuma: %i\n", suma);
}