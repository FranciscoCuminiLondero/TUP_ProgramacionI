#include <stdlib.h>
#include <stdio.h>

void TipoTriangulo(float l1, float l2, float l3);

int main()
{
    float l1, l2, l3;

    printf("Ingrese el primer lado del triangulo: ");
    scanf("%f", &l1);
    printf("Ingrese el segundo lado del triangulo: ");
    scanf("%f", &l2);
    printf("Ingrese el tercer lado del triangulo: ");
    scanf("%f", &l3);

    TipoTriangulo(l1, l2, l3);

    return 0;
}

void TipoTriangulo(float l1, float l2, float l3)
{
    if (l1 == l2 && l1 == l3)
    {
        printf("Triangulo EQUILATERO");
    }
    else if (l1 == l2 || l1 == l3 || l2 == l3)
    {
        printf("Triangulo ISOSCELES");
    }
    else
    {
        printf("Triangulo ESCALENO");
    }
}
