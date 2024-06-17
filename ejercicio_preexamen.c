#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargaDatos(char array[4][4][50]);
void registrarVenta(char array[4][4][50]);
void calcularMostrarDatos(char array[4][4][50]);

int main()
{
    char ventas[4][4][50];

    cargaDatos(ventas);
    registrarVenta(ventas);
    calcularMostrarDatos(ventas);
    return 0;
}

void cargaDatos(char array[4][4][50])
{

    strcpy(array[0][0], "01");
    strcpy(array[0][1], "3500.00");
    strcpy(array[0][2], "Mantel 2x2");
    strcpy(array[0][3], "0");

    strcpy(array[1][0], "02");
    strcpy(array[1][1], "800.99");
    strcpy(array[1][2], "Plato Playo 24cm");
    strcpy(array[1][3], "0");

    strcpy(array[2][0], "03");
    strcpy(array[2][1], "1450.50");
    strcpy(array[2][2], "Copa de Vino");
    strcpy(array[2][3], "0");

    strcpy(array[3][0], "04");
    strcpy(array[3][1], "650.50");
    strcpy(array[3][2], "Plato Hondo 22cm");
    strcpy(array[3][3], "0");
}

void registrarVenta(char array[4][4][50])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Ingrese la cantidad vendida del producto %s: ", array[i][2]);
        scanf(" %s", array[i][3]);
    }
}

void calcularMostrarDatos(char array[4][4][50])
{
    int i;
    float subtotal, precio, cantidad_vendida, iva;
    float monto_total, total_iva, monto_con_iva;
    monto_total = 0;
    total_iva = 0;
    for (i = 0; i < 4; i++)
    {
        precio = atof(array[i][1]);
        cantidad_vendida = atof(array[i][3]);
        subtotal = precio * cantidad_vendida;
        iva = subtotal * 0.21;
        monto_total = monto_total + subtotal;
        total_iva = total_iva + iva;
    }
    monto_con_iva = monto_total + total_iva;
    printf("Monto total neto vendido: %.2f\n", monto_total);
    printf("Total de IVA del dia: %.2f\n", total_iva);
    printf("Monto total con IVA: %.2f\n", monto_con_iva);
}
