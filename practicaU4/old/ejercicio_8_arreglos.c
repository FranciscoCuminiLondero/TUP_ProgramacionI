#include <stdio.h>
int main()
{
    //           f  c
    float numeros_reales[4][3];
    float total = 0;
    float subtotal = 0; // rango de indices para las filas [0,3]
    // rango de indices para las columnas [0,2]
    //  inicio    final   paso
    for (int j = 0; j <= 2; j++) // itero por columna
    {
        subtotal = 0;
        for (int i = 0; i <= 3; i++) // itero por fila
        {
            printf("Ingrese el numero %i para la columna %i: ", i + 1, j + 1);
            scanf("%f", &numeros_reales[i][j]);
            total = total + numeros_reales[i][j];
            subtotal = subtotal + numeros_reales[i][j];
        }
        printf("Subtotal columna %d: %.2f\n", j + 1, subtotal);
    }

    printf("Total: %.2f\n", total);
    return 0;
}