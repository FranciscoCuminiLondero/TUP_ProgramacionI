// 3- Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int lado1;
    int lado2;
    int lado3;

    printf("Ingrese la longitud (en cm) del primer lado de un triangulo\n");
    scanf("%i", &lado1);

    printf("Ingrese la longitud (en cm) del segundo lado de un triangulo\n");
    scanf("%i", &lado2);

    printf("Ingrese la longitud (en cm) del tercer lado de un triangulo\n");
    scanf("%i", &lado3);

    printf("El perimetro del triangulo con de lados %icm, %icm y %icm es %icm\n", lado1, lado2, lado3, lado1 + lado2 + lado3);

    system("pause");
}