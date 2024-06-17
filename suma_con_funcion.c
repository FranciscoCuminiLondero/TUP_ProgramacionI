#include <stdio.h>
#include <stdlib.h>

float sumar(float num1, float num2);

int main()
{
    float numero1, numero2, resultado;

    printf("Ingrese el primer numero:\n");
    scanf("%f", &numero1);
    printf("Ingrese el segundo numero:\n");
    scanf("%f", &numero2);

    resultado = sumar(numero1, numero2);

    printf("La suma es: %f\n", resultado);

    system("pause");
    return 0;
}

// suma dos numeros flotantes
float sumar(float num1, float num2)
{
    float respuesta;
    respuesta = num1 + num2;

    return respuesta;
}