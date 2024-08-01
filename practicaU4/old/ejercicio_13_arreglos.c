// 13. Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro,concatenar de la forma "nombre apellido" para cada uno, y mostrar por consola.

#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[2][15];
    char apellido[2][15];
    char nombre_apellido[2][30];

    for (int i = 0; i < 2; i++)
    {
        printf("Ingrese un nombre: ");
        scanf("%s", &nombre[i]);
        printf("%s\n", nombre[i]);

        printf("Ingrese un apellido: ");
        scanf("%s", &apellido[i]);
        printf("%s\n", apellido[i]);

        printf("%s\n", strcat(strcat(nombre[i], " "), apellido[i]));
    }

    return 0;
}