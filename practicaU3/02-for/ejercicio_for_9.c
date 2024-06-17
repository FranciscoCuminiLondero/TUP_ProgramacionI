// 9. Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9

#include <stdio.h>

int main()
{
    int multiplicacion = 0;

    for (int i = 1; i < 10; i++)
    {
        printf("\nTabla de multiplicar: %d\n\n", i);
        for (int j = 0; j <= 10; j++)
        {
            multiplicacion = i * j;
            printf("%d x %d = %d\n", i, j, multiplicacion);
        }
    }
    return 0;
}