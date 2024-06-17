// 3- Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número (repetir el ingreso de dicho número mientras el número no sea correcto). Informar al usuario la suma de los 10 números ingresados.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    int contador = 0;
    float suma = 0;

    while (contador < 10)
    {
        printf("Ingrese un numero real postivo: ");
        scanf("%f", &num);

        while (num <= 0)
        {
            printf("ERROR: El numero no es positivo\n");
            printf("Intente nuevamente. Ingrese un numero real positivo: ");
            scanf("%f", &num);
        }

        suma += num;
        contador++;
    }

    printf("La suma de los numeros es: %.2f\n", suma);

    system("pause");
}