// 6- Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do valor ingresado, imprimir los resultados

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float num1, num2, suma, resta, producto;

    printf("\nIngrese un numero\n");
    scanf("%f", &num1);

    printf("\nIngrese otro numero\n");
    scanf("%f", &num2);

    suma = num1 + num2;
    resta = num1 + num2;
    producto = num1 * num2;

    printf("\nEl valor de %.2f + %.2f = %.2f\n", num1, num2, suma);
    printf("\nEl valor de %.2f - %.2f = %.2f\n", num1, num2, resta);
    printf("\nEl valor de %.2f x %.2f = %.2f\n\n", num1, num2, producto);

    system("pause");
}
