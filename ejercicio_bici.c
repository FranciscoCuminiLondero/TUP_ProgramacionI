#include <stdio.h>

int main()
{
    int medio_pago, tipo_bici;
    char es_jubilado, tipo_bici_comun;
    float precio_bici, descuento;

    printf("Ingrese el medio de pago: 1. Efectivo/debito, 2. Credito\n");
    scanf("%d", &medio_pago);

    printf("Ingrese si (s) o no (n), si es jubilado\n");
    scanf(" %c", &es_jubilado);

    printf("Es bicicleta deportiva (1) o es comun (2)\n");
    scanf("%d", &tipo_bici);

    if (tipo_bici == 1)
    {
        precio_bici = 500;
    }
    else
    {
        printf("Ingrese si tiene canasto (s) o no (n)\n");
        scanf("%c", &tipo_bici_comun);

        if (tipo_bici_comun == 's')
        {
            precio_bici = 400;
        }
        else
        {
            precio_bici = 300;
        }
    }

    if (es_jubilado == 's')
    {
        if (tipo_bici == 1)
        {
            descuento = 0.10;
        }
        else
        {
            descuento = 0.25;
        }
    }

    if (medio_pago == 1)
    {
        descuento = descuento + 0.15;
    }

    printf("El precio de la bici es de: %0.2f\n", precio_bici = precio_bici - precio_bici * descuento);

    return 0;
}