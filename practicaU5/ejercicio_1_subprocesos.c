#include <stdlib.h>
#include <stdio.h>

void PedirDatos(char *nombre, char *apellido, int *edad);
void MostrarDatos(char *nombre, char *apellido, int edad);

int main()
{
    char nombre[15];
    char apellido[15];
    int edad;

    PedirDatos(nombre, apellido, &edad);
    MostrarDatos(nombre, apellido, edad);

    return 0;
}

void PedirDatos(char *nombre, char *apellido, int *edad)
{
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su apellido: ");
    scanf("%s", apellido);
    printf("Ingrese su edad: ");
    scanf("%d", edad);
}

void MostrarDatos(char *nombre, char *apellido, int edad)
{
    printf("Nombre: %s\nApellido: %s\nEdad: %d\n", nombre, apellido, edad);
}
