// 5- El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al usuario los resultado

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main()
{
    float base, altura, diagonal, superficie, perimetro;

    printf("\nIngrese (en cm) la base del rectangulo\n");
    scanf("%f", &base);

    printf("\nIngrese (en cm) la altura del rectangulo\n");
    scanf("%f", &altura);

    diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    superficie = base * altura;
    perimetro = (base + altura) * 2;

    printf("\nLa diagonal principal del rectangulo es de: %.2fcm\n", diagonal);
    printf("La superficie del rectangulo es de: %.2fcm%c\n", superficie, 253);
    printf("El perimetro del rectangulo es de: %.2fcm\n\n", perimetro);

    system("pause");
}