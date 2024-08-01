#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[5];
    int aprobados = 0, desaprobados = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese la nota del alumno %d: ", i + 1);
        scanf("%f", &notas[i]);
        if (notas[i] >= 6)
        {
            aprobados++;
        }
        else
        {
            desaprobados++;
        }
    }

    printf("Aprobaron %d alumnos y desaprobaron %d alumnos\n", aprobados, desaprobados);

    return 0;
}