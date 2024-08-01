#include <stdio.h>
#include <stdlib.h>

float calcularSueldo(float horas_trabajadas, float valor_hora);

int main()
{
    float horas_trabajadas;
    float valor_hora;
    float sueldo;

    printf("Ingrese la cantidad de horas trabajas en el mes:\n");
    scanf("%f", &horas_trabajadas);

    printf("Ingrese el valor de la hora:\n");
    scanf("%f", &valor_hora);

    sueldo = calcularSueldo(horas_trabajadas, valor_hora);

    printf("El sueldo del empleado es de: $%.2f\n", sueldo);
}

float calcularSueldo(float horas_trabajadas, float valor_hora)
{
    float sueldo;

    if (horas_trabajadas > 50)
    {
        valor_hora = valor_hora * 2;
    }

    sueldo = horas_trabajadas * valor_hora;

    return sueldo;
}