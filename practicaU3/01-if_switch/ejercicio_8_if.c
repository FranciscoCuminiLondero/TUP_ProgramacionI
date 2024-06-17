// 8- Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo sea mayor o igual que el importe a retirar.

#include <stdio.h>

void main()
{
    float saldo_cuenta = 350000;
    float retiro;

    printf("Ingrese la cantidad a retirar\n");
    scanf("%f", &retiro);

    if (retiro <= saldo_cuenta)
    {
        saldo_cuenta = saldo_cuenta - retiro;
        printf("Retiraste $%.2f. La cuenta queda con un saldo de $%.2f\n", retiro, saldo_cuenta);
    }
    else
    {
        printf("El importe $%.2f es mayor al saldo en la cuenta de $%.2f\n", retiro, saldo_cuenta);
    }
}