// 11. Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras).

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char cadena1[50];
    char cadena2[50];
    char cadena3[50];

    printf("Introduce la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);

    printf("Introduce la segunda cadena: ");
    fgets(cadena1, sizeof(cadena2), stdin);

    printf("Introduce la tercera cadena: ");
    fgets(cadena1, sizeof(cadena3), stdin);

    cadena1[strcspn(cadena1, "\n")] = '\0';
    cadena2[strcspn(cadena2, "\n")] = '\0';
    cadena3[strcspn(cadena3, "\n")] = '\0';

    printf("La longitud de la primera cadena es: %s\n", strlen(cadena1));
    printf("La longitud de la segunda cadena es: %s\n", strlen(cadena2));
    printf("La longitud de la tercera cadena es: %lu\n", strlen(cadena3));

    return 0;

}

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{

    char cadenas[3][30];
    int longitudes[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese el nombre %d: ", i + 1);
        fgets(cadenas[i], sizeof(cadenas[i]), stdin);

        longitudes[i] = strlen(cadenas[i]) - 1;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("La longitud de la cadena %d es: %d\n", i + 1, longitudes[i]);
    }
    return 0;
}