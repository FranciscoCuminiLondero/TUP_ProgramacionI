// 12 - Realizar un programa que permita registrar los datos para una venta de $4600. Para ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menorque 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingreseuna opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés porpagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, encaso contrario informar la situación y finalizar programa. Por último, presentar unresumen de la operación, por ejemplo:DNI: 38.456.123Medio de pago: Tarjeta de créditoTarjeta: CabalCuotas: 3Total: $4784

#include <stdio.h>

void main()
{
    int dni_usuario, medio_pago, tipo_tarjeta, cantidad_cuotas;
    float total_venta = 4600;

    // DNI
    printf("Ingrese su DNI\n");
    scanf("%i", &dni_usuario);

    if (dni_usuario >= 1000000 && dni_usuario <= 99999999)
    {
        printf("Ingrese su medio de pago: 1-Efectivo, 2-Tarjeta de credito\n");
        scanf("%i", &medio_pago);

        if (medio_pago == 1 || medio_pago == 2)
        {
            if (medio_pago == 2)
            {
                printf("Ingrese el tipo de tarjeta: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal\n");
                scanf("%i", &tipo_tarjeta);

                if (tipo_tarjeta >= 1 && tipo_tarjeta <= 4)
                {
                    printf("Ingrese la cantidad de cuotas a abonar: 1, 3, 6 o 12\n");
                    scanf("%d", &cantidad_cuotas);
                    if (cantidad_cuotas == 1 || cantidad_cuotas == 3 || cantidad_cuotas == 6 || cantidad_cuotas == 12)
                    {
                        if (cantidad_cuotas == 1)
                        {
                            total_venta = total_venta;
                        }
                        else if (cantidad_cuotas == 3)
                        {
                            total_venta = total_venta + (total_venta * 0.04);
                        }
                        else if (cantidad_cuotas == 6 || cantidad_cuotas == 12)
                        {
                            total_venta = total_venta + (total_venta * 0.08);
                        }
                        printf("---------------\n");
                        printf("DNI: %d\n", dni_usuario);
                        printf("Medio de pago: Tarjeta\n");
                        if (tipo_tarjeta == 1)
                        {
                            printf("Tipo de tarjeta: Visa\n");
                        }
                        else if (tipo_tarjeta == 2)
                        {
                            printf("Tipo de tarjeta: American Express\n");
                        }
                        else if (tipo_tarjeta == 3)
                        {
                            printf("Tipo de tarjeta: Mercado pago\n");
                        }
                        else if (tipo_tarjeta == 4)
                        {
                            printf("Tipo de tarjeta: Cabal\n");
                        }
                        printf("Cuotas: %d\n", cantidad_cuotas);
                        printf("Total: $%.2f\n", total_venta);
                        printf("---------------\n");
                    }
                    else
                    {
                        printf("Cantidad de cuotas: Incorrecto\n");
                    }
                }
                else
                {
                    printf("Tipo de tarjeta: Incorrecto\n");
                }
            }
            else
            {
                printf("---------------\n");
                printf("DNI: %d\n", dni_usuario);
                printf("Medio de pago: Efectivo\n");
                printf("Total: %.2f\n", total_venta);
                printf("---------------\n");
            }
        }
        else
        {
            printf("Medio de pago: Incorrecto\n");
        }
    }
    else
    {
        printf("DNI: Incorrecto\n");
    }
}
