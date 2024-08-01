// 12. Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.

#include <stdio.h>
#include <string.h>

int main()
{
    char nombre1[15];
    char nombre2[15];
    int respuesta;

    strcpy(nombre1, "francisco");
    strcpy(nombre2, "francisco");

    respuesta = strcmp(nombre1, nombre2);

    if (respuesta < 0)
    {
        printf("El primer nombre precede al segundo: %s a %s", nombre1, nombre2);
    }
    else if (respuesta > 0)
    {
        printf("el segundo nombre precede al primero: %s a %s", nombre2, nombre1);
    }
    else
    {
        printf("Ambos son iguales: %s y %s", nombre1, nombre2);
    }

    return 0;
}