#include <stdio.h>

int main()
{
    int edadAlumno;
    int cantidad_alumnos_mayores;
    cantidad_alumnos_mayores = 0;

    for (int i = 0; i < 30; i++)
    {
        printf("Ingrese la edad del alumno %i ", i + 1);
        scanf("%i", &edadAlumno);

        if (edadAlumno >= 21)
        {
            cantidad_alumnos_mayores = cantidad_alumnos_mayores + 1;
        }
    }

    printf("La cantidad de alumnos que superan los 21 anios es: %i\n", cantidad_alumnos_mayores);

    return 0;
}