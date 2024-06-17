// 11- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).Luego presentar el siguiente menú: 1. Informar su suma 2. Informar su resta 3. Informar su multiplicación4. Informar su división 5. Salir Seleccione una operación:
// Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el programa debe terminar.

#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    int operador;

    printf("Ingrese el primer operando\n");
    scanf("%f", &num1);

    printf("Ingrese el segundo operando\n");
    scanf("%f", &num2);

    printf("Ingrese el tipo de operacion a realizar: suma (1), resta (2), multiplicacion (3), division (4) y salir (5)\n");
    scanf("%i", &operador);

    switch (operador)
    {
    case 1:
        resultado = num1 + num2;
        printf("El resultado es %.2f\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("El resultado es %.2f\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("El resultado es %.2f\n", resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("El resultado es %.2f\n", resultado);
        break;
    case 5:
        printf("A salido del programa...\n");
        break;

    default:
        printf("Ingrese adecuadamente el tipo de operacion\n");
        break;
    }
    return 0;
}