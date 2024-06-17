#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombres[5][50];
    // El primer corchete indica la cantidad de nombres que necesito almacenar.
    // El segundo corchete indica la longitud máxima de cada nombre,
    // es decir los 10 nombres ingresados deberán tener menos de 50 caracteres.
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre %d\n", i + 1);
        scanf("%s", &nombres[i]);
        // fgets(nombres[i], sizeof(nombres[i]), stdin);
    }

    printf("\nLos nombres son: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%i. %s\n", i + 1, nombres[i]);
    }

    return 0;
}