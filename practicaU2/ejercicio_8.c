// 8- Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es de 800 pesos, calcular su sueldo e imprimirlo

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float horas_trabajadas, sueldo;
    int valor_hora = 800;

    printf("\nIngrese la cantidad de horas trabajadas en el mes\n");
    scanf("%f", &horas_trabajadas);

    sueldo = valor_hora * horas_trabajadas;

    printf("\nEl sueldo por trabajar %.2f horas es de $%.2f\n\n", horas_trabajadas, sueldo);

    system("pause");
}