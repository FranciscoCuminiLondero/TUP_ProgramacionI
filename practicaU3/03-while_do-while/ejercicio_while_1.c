// 1. Imprimir en la consola los números del 1 al 100.

#include <stdio.h>

int main()
{
    int num = 1;

    do
    {
        printf("%i\n", num);
        num++;
    } while (num <= 100);
}