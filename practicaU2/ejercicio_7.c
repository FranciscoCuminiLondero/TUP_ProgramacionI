// 7- Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su sueldo e imprimirlo

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float valor_hora, cantidad_horas_trabajadas, sueldo;

    printf("\nIngrese el valor de la hora de trabajo\n");
    scanf("%f", &valor_hora);

    printf("\nIngrese la cantidad de horas trabajadas\n");
    scanf("%f", &cantidad_horas_trabajadas);

    sueldo = valor_hora * cantidad_horas_trabajadas;

    printf("\nCon un pago de $%.2f x hora y un total de %.2f horas trabajadas, el sueldo que le corresponde al trabajador es de $%.2f\n\n", valor_hora, cantidad_horas_trabajadas, sueldo);

    system("pause");
}