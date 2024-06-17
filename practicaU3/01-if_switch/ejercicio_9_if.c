// 9- Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”; si la altura está entre 151 y 170 escriba el mensaje: “Persona de altura media” y si la altura es mayor al 171 escriba el mensaje: “Persona de altura por arriba de la media”

#include <stdio.h>

void main()
{
    float altura_usuario;

    printf("Ingrese su altura\n");
    scanf("%f", &altura_usuario);

    if (altura_usuario <= 150)
    {
        printf("Persona de altura por debajo de la media\n");
    }
    else
    {
        if (altura_usuario >= 151 && altura_usuario <= 170)
        {
            printf("Persona de altura media\n");
        }
        else
        {
            printf("Persona de altura por arriba de la media\n");
        }
    }
}