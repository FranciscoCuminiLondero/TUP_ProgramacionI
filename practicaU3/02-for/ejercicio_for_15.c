// 15. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones. Mostrar el promedio por alumno y el promedio general.

#include <stdio.h>

int main()
{
    float promedioAlumno = 0, calificacionesAlumno = 0, promedioGeneral = 0;

    for (int i = 1; i <= 5; i++)
    {
        promedioAlumno = 0;
        printf("\nAlumno %i\n", i);

        for (int j = 1; j < 4; j++)
        {
            printf("Ingrese la calificacion %d: ", j);
            scanf("%f", &calificacionesAlumno);
            promedioAlumno = promedioAlumno + calificacionesAlumno;
        }
        promedioAlumno = promedioAlumno / 3;
        printf("\nPromedio alumno %i: %.2f\n", i, promedioAlumno);
        printf("----------------\n");

        promedioGeneral = promedioGeneral + promedioAlumno;
    }
    promedioGeneral = promedioGeneral / 5;
    printf("PROMEDIO GENERAL: %.2f\n", promedioGeneral);
    printf("----------------\n");

    return 0;
}
