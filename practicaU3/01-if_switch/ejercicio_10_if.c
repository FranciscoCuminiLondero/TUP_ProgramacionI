// 10- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes correspondedicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en laconsola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructuraif y luego estructura switch).

#include <stdio.h>

void main()
{
    int num;

    printf("Ingrese un numero del 1 al 12\n");
    scanf("%i", &num);

    if (num >= 1 && num <= 12)
    {
        if (num == 1)
        {
            printf("ENERO\n");
        }
        else if (num == 2)
        {
            printf("FEBRERO\n");
        }
        else if (num == 3)
        {
            printf("MARZO\n");
        }
        else if (num == 4)
        {
            printf("ABRIL\n");
        }
        else if (num == 5)
        {
            printf("MAYO\n");
        }
        else if (num == 6)
        {
            printf("JUNIO\n");
        }
        else if (num == 7)
        {
            printf("JULIO\n");
        }
        else if (num == 8)
        {
            printf("AGOSTO\n");
        }
        else if (num == 9)
        {
            printf("SEPTIEMBRE\n");
        }
        else if (num == 10)
        {
            printf("OCTUBRE\n");
        }
        else if (num == 11)
        {
            printf("NOVIEMBRE\n");
        }
        else if (num == 12)
        {
            printf("DICIEMBRE\n");
        }
    }
    else
    {
        printf("Debes ingresar un numero del 1 al 12\n");
    }
}