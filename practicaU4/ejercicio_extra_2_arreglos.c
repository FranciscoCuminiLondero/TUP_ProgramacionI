#include <stdio.h>
#include <stdlib.h>

int main()
{
    float totalVendedor, totalTienda = 0;
    int n;

    printf("Ingrese la cantidad de vendedores: ");
    scanf("%d", &n);

    float arreglo[n][5];

    for (int i = 0; i < n; i++)
    {
        totalVendedor = 0;
        printf("Vendedor %d\n", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("Ingrese el monto del producto %d: ", j + 1);
            scanf("%f", &arreglo[i][j]);
            totalVendedor = totalVendedor + arreglo[i][j];
        }
        totalTienda = totalTienda + totalVendedor;
        printf("El total del vendedor %d es $%.2f\n", i + 1, totalVendedor);
    }

    printf("El total vendido por la tienda es de $%.2f", totalTienda);

    return 0;
}