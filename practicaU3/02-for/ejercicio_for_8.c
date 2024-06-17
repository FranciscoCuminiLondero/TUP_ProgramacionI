// 8. Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número.

#include <stdio.h>

int main()
{
    int n1;
    int resultado = 0;

    printf("Ingrese un numero entero\n");
    scanf("%i", &n1);
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        resultado = n1 * i;
        printf("%i x %i = %i\n", n1, i, resultado);
    }

    return 0;
}