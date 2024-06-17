// 15. Escribe un programa que solicite al usuario una cadena de caracteres y luego imprima la cadena invertida.

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[100];
    int largo_cadena;

    printf("Ingrese una cadena: ");
    gets(cadena);

    largo_cadena = strlen(cadena);

    for (int i = largo_cadena - 1; i >= 0; i--)
    {
        printf("%c", cadena[i]);
    }

    return 0;
}
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[100];

    // Solicitar al usuario una cadena de caracteres
    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Eliminar el salto de línea final si está presente
    cadena[strcspn(cadena, "\n")] = '\0';

    // Imprimir la cadena invertida
    printf("Cadena invertida: ");
    for (int i = strlen(cadena) - 1; i >= 0; i--)
    {
        printf("%c", cadena[i]);
    }
    printf("\n");

    return 0;
}