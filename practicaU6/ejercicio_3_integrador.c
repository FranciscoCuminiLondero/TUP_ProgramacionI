#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargaProductos(char arreglo[4][3][50]);
void mostrarTabla(char arreglo[4][3][50]);
void cargarVentaProductos(char arreglo[4][3][50]);
void ordenarPorCantidad(char arreglo[4][3][50]);

int main()
{
    char arreglo_prod[4][3][50];

    cargaProductos(arreglo_prod);
    printf("Listado de productos:\n");
    printf("Cod | Descripcion | Cantidad Vendida |\n");
    mostrarTabla(arreglo_prod);
    cargarVentaProductos(arreglo_prod);
    printf("Productos con cantidad vendida:\n");
    printf("Cod | Descripcion | Cantidad Vendida |\n");
    mostrarTabla(arreglo_prod);
    ordenarPorCantidad(arreglo_prod);
    printf("Productos ordenados por cantidad vendida:\n");
    printf("Cod | Descripcion | Cantidad Vendida |\n");
    mostrarTabla(arreglo_prod);

    return 0;
}

void cargaProductos(char arreglo[4][3][50])
{
    strcpy(arreglo[0][0], "01");
    strcpy(arreglo[0][1], "Mantel 2x2");
    strcpy(arreglo[0][2], "0");

    strcpy(arreglo[1][0], "02");
    strcpy(arreglo[1][1], "Plato playo 24cm");
    strcpy(arreglo[1][2], "0");

    strcpy(arreglo[2][0], "03");
    strcpy(arreglo[2][1], "Copa vino");
    strcpy(arreglo[2][2], "0");

    strcpy(arreglo[3][0], "04");
    strcpy(arreglo[3][1], "Plato hondo 22cm");
    strcpy(arreglo[3][2], "0");
}

void mostrarTabla(char arreglo[4][3][50])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%s | ", arreglo[i][j]);
        }
        printf("\n");
    }
}

void cargarVentaProductos(char arreglo[4][3][50])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Ingrese la cantidad vendida del producto %s: ", arreglo[i][1]);
        scanf("%s", arreglo[i][2]);
    }
}

void ordenarPorCantidad(char arreglo[4][3][50])
{
    int i, j, k, pos_menor;
    char aux[3][50];

    for (i = 0; i < 3; i++)
    {
        pos_menor = i;
        for (j = i + 1; j < 4; j++)
        {
            if (atoi(arreglo[j][2]) < atoi(arreglo[pos_menor][2]))
            {
                pos_menor = j;
            }
        }

        for (k = 0; k < 3; k++)
        {
            strcpy(aux[k], arreglo[i][k]);
            strcpy(arreglo[i][k], arreglo[pos_menor][k]);
            strcpy(arreglo[pos_menor][k], aux[k]);
        }
    }
}
