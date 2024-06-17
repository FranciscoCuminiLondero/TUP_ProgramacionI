// 3- Pedir al usuario que ingrese un carácter en mayúscula y luego imprimir su equivalente en minúscula.

#include <stdio.h>

int main()
{
    char char_mayuscula;
    char char_minuscula;

    printf("Ingrese un caracter en mayuscula\n");
    scanf("%c", &char_mayuscula);

    // El 32 porque según el código ASCII si le sumas al caracter en mayuscula 32 nos da el código de la misma letra en minuscula
    char_minuscula = char_mayuscula + 32;

    printf("%c => %c", char_mayuscula, char_minuscula);

    return 0;
}