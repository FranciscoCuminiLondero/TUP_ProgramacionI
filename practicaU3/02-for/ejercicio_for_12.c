// 12. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:

/*
@
@@
@@@
...
@@@@@@@@@
@@@@@@@@@@
*/

#include <stdio.h>

int main()
{
    // char arroba = '@';
    char arroba = 64;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", arroba);
        }
        printf("\n");
    }

    return 0;
}