#include <stdio.h>

int main()
{
    int stock = 10;
    int cantidad;

    do // este do-while itera hasta que me queden artículos para vender
    {
        printf("Quedan %i articulos\n", stock);

        do // este do-while valida que la cantidad leida no supere el stock
        {
            printf("Ingrese la cantidad a comprar\n");
            scanf("%i", &cantidad);

            if (cantidad > stock)
            {
                printf("Estas intentando comprar una cantidad mayor al stock, quedan %i\n", stock);
            }

        } while (cantidad > stock);

        stock = stock - cantidad;
    } while (stock > 0);

    printf("No quedan mas articulos\n");

    return 0;
}
