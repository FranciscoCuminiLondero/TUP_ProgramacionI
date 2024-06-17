// 4- Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float lado1, lado2, hipotenusa, perimetro, area;
    char aTilde = 160;
    char alCuadrado = 253;

    printf("Ingrese el valor del primer lado del tri%cngulo rect%cngulo: \n", aTilde, aTilde);
    scanf("%f", &lado1);

    printf("Ingrese el valor del segundo lado del tri%cngulo rect%cngulo: \n", aTilde, aTilde);
    scanf("%f", &lado2);

    hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
    perimetro = lado1 + lado2 + hipotenusa;
    area = (lado1 * lado2) / 2;

    printf("El valor de la hipotenusa es %.2fcm\n", hipotenusa);
    printf("El valor del perimetro es %.2fcm\n", perimetro);
    printf("El valor de la area es %.2fcm%c\n", area, alCuadrado);

    system("pause");
}
