// 11. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:

/*
@@
@
@@
@
@@
@
...
*/

#include <stdio.h>

int main()
{
    // char arroba = '@';
    char arroba = 64;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%c%c\n", arroba, arroba);
        }
        else
        {
            printf("%c\n", arroba);
        }
    }

    return 0;
}