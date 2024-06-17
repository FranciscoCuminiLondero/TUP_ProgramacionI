#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char datos_clientes[2][5][30] = {
        {"Ana", "Martinez", "17123456", "+541141200011", "56"},
        {"Camila", "Noe", "25789101", "+543419485831", "45"}};
    int i;
    char dni_usuario[9];

    /*
    char pacientes[MAX_PATIENTS][5][MAX_LENGTH] = { {"Ana", "Martinez", "17123456", "+541141200011", "56"}, {"Camila", "Noe", "25789101", "+543419485831", "45"}, {"Bruno", "Noe", "39121314", "+541145565789", "26"}, {"Dardo", "Pistilli", "21151617", "+541158637543", "48"}, {"Ernestina", "Quesada", "33181920", "+541161294758", "35"}, {"Fausto", "Ramirez", "15212223", "+543423444567", "60"}, {"Jasmín", "Sosa", "40242526", "+543402512345", "25"}, {"Leonardo", "Tolosa", "11272829", "+541151234567", "70"} };
    */

    /*
    strcpy(datos_clientes[0][0], "Ana")
    */

    printf("Ingrese el dni del usuario a buscar: ");
    scanf("%s", &dni_usuario);
    i = 0;
    while (i <= 1)
    {
        if (strcmp(dni_usuario, datos_clientes[i][2]) == 0)
        {
            for (int j = 0; j <= 4; j++)
            {

                printf("%s ", datos_clientes[i][j]);
            }
            printf("\n");
            break;
        }
        i++;
    }
    printf("DNI no encontrado\n");
    return 0;
}

/*
    #include <stdio.h>
    #include <string.h>


    void cargaDatos(char personas[8][5][30]);

    int main()
    {
        char pacientes[8][5][30];

        cargaDatos(pacientes);

        printf("Sin ordenar\n");
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%s ", pacientes[i][j]);
            }
            printf("\n");
        }



        return 0;
    }

    //Función que devuelve la posición de la fila en la cual se encuentra el dni ingresado o -1 si no se encuentra el dni

    int buscarDni(char personas[8][5][30], char dniABuscar)
    {

    }

    void cargaDatos(char personas[8][5][30])
    {
        // columnas: Nombre, Apellido, DNI, Telefono, Edad
        //personas[0][0] = "Ana"; INCORRECTO

        strcpy(personas[0][0], "Ana");
        strcpy(personas[1][0], "Camila");
        strcpy(personas[2][0], "Bruno");
        strcpy(personas[3][0], "Dardo");
        strcpy(personas[4][0], "Ernestina");
        strcpy(personas[5][0], "Fausto");
        strcpy(personas[6][0], "Jasmin");
        strcpy(personas[7][0], "Leonardo");

        strcpy(personas[0][1], "Martinez");
        strcpy(personas[1][1], "Noe");
        strcpy(personas[2][1], "Noe");
        strcpy(personas[3][1], "Pistilli");
        strcpy(personas[4][1], "Quesada");
        strcpy(personas[5][1], "Ramirez");
        strcpy(personas[6][1], "Sosa");
        strcpy(personas[7][1], "Tolosa");

        strcpy(personas[0][2], "17123456");
        strcpy(personas[1][2], "25789101");
        strcpy(personas[2][2], "39121314");
        strcpy(personas[3][2], "21151617");
        strcpy(personas[4][2], "33181920");
        strcpy(personas[5][2], "15212223");
        strcpy(personas[6][2], "40242526");
        strcpy(personas[7][2], "11272829");

        strcpy(personas[0][3], "+541141200011");
        strcpy(personas[1][3], "+543419485831");
        strcpy(personas[2][3], "+541145565789");
        strcpy(personas[3][3], "+541158637543");
        strcpy(personas[4][3], "+541158637543");
        strcpy(personas[5][3], "+543423444567");
        strcpy(personas[6][3], "+543402512345");
        strcpy(personas[7][3], "+541151234567");

        strcpy(personas[0][4], "56");
        strcpy(personas[1][4], "45");
        strcpy(personas[2][4], "26");
        strcpy(personas[3][4], "48");
        strcpy(personas[4][4], "35");
        strcpy(personas[5][4], "60");
        strcpy(personas[6][4], "25");
        strcpy(personas[7][4], "70");
    }
*/