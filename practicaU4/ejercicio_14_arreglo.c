// 14. Escribe un programa que solicite al usuario una cadena de caracteres y luego cuente el número de vocales que contiene.

#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[100];
    int i = 0;
    int cant_vocales = 0;

    printf("Ingrese una cadena de caracteres: ");
    gets(cadena);

    do
    {
        if (cadena[i] == 'a' || cadena[i] == 'A' || cadena[i] == 'e' || cadena[i] == 'E' || cadena[i] == 'i' || cadena[i] == 'I' || cadena[i] == 'o' || cadena[i] == 'O' || cadena[i] == 'u' || cadena[i] == 'U')
        {
            cant_vocales++;
        }
        i++;
    } while (cadena[i] != '\0');

    printf("El numero de vocales es %i", cant_vocales);

    return 0;
}