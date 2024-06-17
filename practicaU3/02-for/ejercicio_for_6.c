// 6. Suma de los 10 primeros números múltiplos de tres.

#include <stdio.h>

int main()
{
    int suma = 0;
    int contador = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && contador < 10)
        {
            suma = suma + i;
            contador++;
            printf("Multiplo de 3 => %i: %i\n", contador, i);
        }
    }

    printf("\nSuma: %i\n", suma);
}