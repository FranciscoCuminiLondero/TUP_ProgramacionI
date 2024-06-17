#include <stdio.h>
#include <stdbool.h>

void ValidarNota(float nota);

int main()
{
    int nota;
    bool valido;
    printf("Ingrese una nota: ");
    
    do
    {
        valido = ValidarNota(nota);
    } while (!valido);


    return 0;
}

void ValidarNota(float nota)
{
    for (int i = 1; i <= 20; i += 1)
    {
        printf("-");
    }

    printf("\n");
}