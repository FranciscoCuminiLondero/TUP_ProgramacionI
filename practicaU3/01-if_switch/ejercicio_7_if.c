// 7. Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar dicha situación.

#include <stdio.h>

void main()
{
    float valor_venta;
    char porcentaje = 37;

    printf("Ingresar el valor de la venta\n");
    scanf("%f", &valor_venta);

    if (valor_venta > 0)
    {
        if (valor_venta >= 100000)
        {
            valor_venta = valor_venta - (valor_venta * 0.15);
            printf("Aplicado el 15%c de descuento\n", porcentaje);
        }
        else
        {
            valor_venta = valor_venta - (valor_venta * 0.10);
            printf("Aplicado el 10%c de descuento\n", porcentaje);
        }
        printf("El valor final de la venta es: %.2f\n", valor_venta);
    }
    else
    {
        printf("El valor ingresado debe ser mayor a 0\n");
    }
}