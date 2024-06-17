#include <stdio.h>

void EscribirSubrayado(char *);

int main()
{
    EscribirSubrayado("Hola mundo");
    EscribirSubrayado("Hello world");
    EscribirSubrayado("Ciao mondo");
    return 0;
}

void EscribirSubrayado(char *frase)
{
    printf("%s\n", frase);
    for (int i = 1; i <= 20; i += 1)
    {
        printf("-");
    }

    printf("\n");
}