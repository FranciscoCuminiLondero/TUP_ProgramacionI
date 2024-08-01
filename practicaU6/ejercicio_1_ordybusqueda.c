#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CargarClientes(char clientes[8][6][50]);
int BuscarPorDNI(char clientes[8][6][50], char numABuscar[50]);
void MostrarDatos(char clientes[8][6][50], int posicion);

int main()
{
    char clientes[8][6][50], dniABuscar[50];
    int posicion;

    CargarClientes(clientes);
    do
    {
        printf("Ingrese el DNI a buscar: ");
        scanf("%s", &dniABuscar);
        posicion = BuscarPorDNI(clientes, dniABuscar);
        if (posicion == -1)
        {
            printf("DNI NO ENCONTRADO\n");
        }
        else
        {
            MostrarDatos(clientes, posicion);
        }

    } while (dniABuscar != "");
}

void CargarClientes(char clientes[8][6][50])
{
    strcpy(clientes[0][0], "0");
    strcpy(clientes[0][1], "Ana");
    strcpy(clientes[0][2], "Martinez");
    strcpy(clientes[0][3], "17123456");
    strcpy(clientes[0][4], "+541141200011");
    strcpy(clientes[0][5], "56");

    strcpy(clientes[1][0], "1");
    strcpy(clientes[1][1], "Camila");
    strcpy(clientes[1][2], "Noe");
    strcpy(clientes[1][3], "25789101");
    strcpy(clientes[1][4], "+543419485831");
    strcpy(clientes[1][5], "45");

    strcpy(clientes[2][0], "2");
    strcpy(clientes[2][1], "Bruno");
    strcpy(clientes[2][2], "Noe");
    strcpy(clientes[2][3], "39121314");
    strcpy(clientes[2][4], "+541145565789");
    strcpy(clientes[2][5], "26");

    strcpy(clientes[3][0], "3");
    strcpy(clientes[3][1], "Dardo");
    strcpy(clientes[3][2], "Pistilli");
    strcpy(clientes[3][3], "2115161");
    strcpy(clientes[3][4], "+541158637543");
    strcpy(clientes[3][5], "48");

    strcpy(clientes[4][0], "4");
    strcpy(clientes[4][1], "Ernestina");
    strcpy(clientes[4][2], "Quesada");
    strcpy(clientes[4][3], "33181920");
    strcpy(clientes[4][4], "+541161294758");
    strcpy(clientes[4][5], "35");

    strcpy(clientes[5][0], "5");
    strcpy(clientes[5][1], "Fausto");
    strcpy(clientes[5][2], "Ramirez");
    strcpy(clientes[5][3], "15212223");
    strcpy(clientes[5][4], "+543423444567");
    strcpy(clientes[5][5], "60");

    strcpy(clientes[6][0], "6");
    strcpy(clientes[6][1], "Jasmin");
    strcpy(clientes[6][2], "Sosa");
    strcpy(clientes[6][3], "40242526");
    strcpy(clientes[6][4], "+543402512345");
    strcpy(clientes[6][5], "25");

    strcpy(clientes[7][0], "7");
    strcpy(clientes[7][1], "Leonardo");
    strcpy(clientes[7][2], "Tolosa");
    strcpy(clientes[7][3], "11272829");
    strcpy(clientes[7][4], "+541151234567");
    strcpy(clientes[7][5], "70");
}

int BuscarPorDNI(char clientes[8][6][50], char numABuscar[50])
{
    int i = 0, posicion = -1;
    while (i < 8)
    {
        if (strcmp(clientes[i][3], numABuscar) == 0)
        {
            posicion = atoi(clientes[i][0]);
        }
        i++;
    }
    return posicion;
}

void MostrarDatos(char clientes[8][6][50], int posicion)
{
    printf("Datos: ");
    for (int i = 1; i < 6; i++)
    {
        printf("%s ", clientes[posicion][i]);
    }
    printf("\n");
}