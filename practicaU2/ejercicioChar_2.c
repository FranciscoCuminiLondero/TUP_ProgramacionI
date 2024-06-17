// 2- Pedir al usuario que ingrese dos caracteres y luego imprimir la suma de sus códigos ASCII.

#include <stdio.h>

int main()
{
    char char_1;
    char char_2;
    int resultado;

    printf("Ingrese un caracter\n");
    scanf("%c", &char_1);

    printf("Ingrese un caracter\n");
    scanf(" %c", &char_2);

    resultado = char_1 + char_2;

    printf("El resultado de sumar %c + %c = %i\n", char_1, char_2, resultado);
    printf("El resultado de sumar %i + %i = %i\n", char_1, char_2, resultado);

    return 0;
}