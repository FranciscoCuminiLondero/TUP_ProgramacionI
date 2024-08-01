#include <stdlib.h>
#include <stdio.h>

float CalcularPromedio(float *notas);
float IdentificarMayor(float *notas);
float IdentificarMenor(float *notas);

int main()
{
    float notas[10], promedio, notaMayor, notaMenor;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese la nota del alumno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    promedio = CalcularPromedio(notas);
    notaMayor = IdentificarMayor(notas);
    notaMenor = IdentificarMenor(notas);

    printf("Promedio: %.2f\n", promedio);
    printf("Nota Mayor: %.2f\n", notaMayor);
    printf("Nota Menor: %.2f\n", notaMenor);

    return 0;
}

float CalcularPromedio(float *notas)
{
    float promedio = 0;
    float acumulador = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        acumulador += notas[i];
    }
    promedio = acumulador / i;
    return promedio;
}

float IdentificarMayor(float *notas)
{
    float notaMayor = notas[0];
    for (int i = 0; i < 10; i++)
    {
        if (notas[i] > notaMayor)
        {
            notaMayor = notas[i];
        }
    }
    return notaMayor;
}

float IdentificarMenor(float *notas)
{
    float notaMenor = notas[0];
    for (int i = 0; i < 10; i++)
    {
        if (notas[i] < notaMenor)
        {
            notaMenor = notas[i];
        }
    }
    return notaMenor;
}