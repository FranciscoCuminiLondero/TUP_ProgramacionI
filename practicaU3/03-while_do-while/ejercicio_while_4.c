// 4 - Realizar un programa que calcule el promedio de las notas de los parciales de un curso. Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va calculando y por último, el promedio general del curso.

#include <stdio.h>

int main()
{
    float promedio_notas;
    float nota_alumno;
    float acumulador_notas;
    int cantidad_alumnos;
    int cantidad_parciales;
    int cantidad_parciales_ingresados;

    // printf("Ingrese la cantidad de alumnos del curso\n");
    // scanf("%d", &cantidad_alumnos);

    printf("Ingrese la cantidad de parciales que se tomaron en el cuatrimestre: ");
    scanf("%d", &cantidad_parciales);

    cantidad_parciales_ingresados = cantidad_parciales;

    do
    {
        printf("\nIngrese una nota\n");
        scanf("%f", &nota_alumno);

        acumulador_notas = acumulador_notas + nota_alumno;
        cantidad_parciales--;
    } while (cantidad_parciales > 0);

    promedio_notas = acumulador_notas / cantidad_parciales_ingresados;
    printf("Notas totales de alumno: %.2f", acumulador_notas);

    // promedio_notas = nota_alumno / cantidad_parciales;

    // printf("Cantidad de alumnos: %d\n", cantidad_alumnos);
    // printf("Cantidad de parciales: %d\n", cantidad_parciales);
}