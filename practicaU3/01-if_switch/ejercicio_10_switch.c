// 10- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes correspondedicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en laconsola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructuraif y luego estructura switch).

#include <stdio.h>

void main()
{
    int num;

    printf("Ingrese un numero del 1 al 12\n");
    scanf("%i", &num);

    switch (num)
    {
    case 1:
        printf("ENERO\n");
        break;
    case 2:
        printf("FEBRERO\n");
        break;
    case 3:
        printf("MARZO\n");
        break;
    case 4:
        printf("ABRIL\n");
        break;
    case 5:
        printf("MAYO\n");
        break;
    case 6:
        printf("JUNIO\n");
        break;
    case 7:
        printf("JULIO\n");
        break;
    case 8:
        printf("AGOSTO\n");
        break;
    case 9:
        printf("SEPTIEMBRE\n");
        break;
    case 10:
        printf("OCTUBRE\n");
        break;
    case 11:
        printf("NOVIEMBRE\n");
        break;
    case 12:
        printf("DICIEMBTE\n");
        break;
    default:
        printf("Debes ingresar un numero del 1 al 12\n");
        break;
    }
}