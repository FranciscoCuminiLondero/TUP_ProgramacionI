#include <stdlib.h>
#include <stdio.h>

int CalcularSuma(int num1, int num2);

int main()
{
    int num1, num2, suma = 0;

    printf("Ingrese el primer numero a sumar: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero a sumar: ");
    scanf("%d", &num2);

    suma = CalcularSuma(num1, num2);
    printf("El resultado de la suma es: %d", suma);

    return 0;
}

int CalcularSuma(int num1, int num2)
{
    return num1 + num2;
}
