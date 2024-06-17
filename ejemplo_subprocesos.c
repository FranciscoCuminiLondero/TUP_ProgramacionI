#include <stdio.h>

void EscribirSubrayado();

int main()
{
    printf("Hola mundo\n");
    EscribirSubrayado();
    printf("Hello world\n");
    EscribirSubrayado();
    printf("Ciao mondo\n");
    EscribirSubrayado();
    return 0;
}

void EscribirSubrayado()
{
    for (int i = 1; i <= 20; i += 1)
    {
        printf("-");
    }

    printf("\n");
}