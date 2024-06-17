// 10. Imprimir por consola 10 veces el carácter @, de manera que se visualice la siguiente salida.
/*
@
@
@
@
...
*/

#include <stdio.h>

int main()
{
    char arroba = '@';
    // char arroba = 64;

    for (int i = 1; i <= 10; i++)
    {
        printf("%i. %c\n", i, arroba);
    }

    return 0;
}