#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, contador, num, max_repeticiones;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    int arreglo[n];

    max_repeticiones = 0;
    num = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el elemento %d\n", i + 1);
        scanf("%d", &arreglo[i]);
    }

    for (int i = 0; i < n; i++)
    {
        contador = 0;
        for (int j = 0; j < n; j++)
        {
            if (arreglo[i] == arreglo[j])
            {
                contador++;
            }
        }

        if (contador > max_repeticiones)
        {
            max_repeticiones = contador;
            num = arreglo[i];
        }
    }

    printf("El numero que mas se repite es el %d y se repite %d veces", num, max_repeticiones);

    return 0;
}