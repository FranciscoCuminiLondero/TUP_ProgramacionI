#include <stdio.h>

int main()
{
    int nota;
    int respuesta = 1;

    while (respuesta == 1)
    {
        printf("Ingrese una nota: ");
        scanf("%i", &nota);

        printf("Desea seguir leyendo notas? si: 1 / no: 0\n");
        scanf("%i", &respuesta);
    }

    printf("Hasta luego");
}