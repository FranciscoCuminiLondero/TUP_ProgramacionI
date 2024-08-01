#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool ValidarDNI(int dni);

int main()
{
    char nombre[15], apellido[15];
    int dni;
    bool dniValido = false;

    printf("Ingrese su nombre: ");
    scanf("%s", &nombre);
    printf("Ingrese su apellido: ");
    scanf("%s", &apellido);

    do
    {
        printf("Ingrese su dni: ");
        scanf("%d", &dni);
        dniValido = ValidarDNI(dni);
        if (dniValido == false)
        {
            printf("ERROR: DNI invalido\n");
        }
    } while (!dniValido);

    printf("Nombre: %s\n", nombre);
    printf("Nombre: %s\n", apellido);
    printf("Nombre: %d\n", dni);

    return 0;
}

bool ValidarDNI(int dni)
{
    bool dniValido;
    if (dni > 999999 && dni < 99999999)
    {
        dniValido = true;
    }
    else
    {
        dniValido = false;
    }

    return dniValido;
}