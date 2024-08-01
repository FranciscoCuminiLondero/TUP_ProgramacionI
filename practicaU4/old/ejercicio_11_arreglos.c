#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    // 11. Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes(número de letras).

    char cadena1[50];
    char cadena2[50];
    char cadena3[50];

    printf("Ingrese una palabra\n");
    scanf("%s", &cadena1);

    printf("Ingrese una palabra\n");
    scanf("%s", &cadena2);

    printf("Ingrese una palabra\n");
    scanf("%s", &cadena3);

    printf("La palabra %s tiene una longitud de %d\n", cadena1, strlen(cadena1));
    printf("La palabra %s tiene una longitud de %d\n", cadena2, strlen(cadena2));
    printf("La palabra '%s' tiene una longitud de %d\n", cadena3, strlen(cadena3));
}