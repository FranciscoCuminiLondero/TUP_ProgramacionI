#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void inicializarDatos(char rutas[4][5][100]);
void mostrarMenu();
void ventaPasaje(char rutas[4][5][100], char pasajeros[4][400][8][100]);
void buscarPasajeVendido(char rutas[4][5][100], char pasajeros[4][400][8][100]);
void buscarPasajero(char rutas[4][5][100], char pasajeros[4][400][8][100]);
void ordenarYMostrarLista(char rutas[4][5][100], char pasajeros[4][400][8][100], bool ascendente);
void cantidadPasajesVendidosPorRuta(char rutas[4][5][100]);
void porcentajeVentasPorRuta(char rutas[4][5][100]);

int main()
{
    char rutas[4][5][100];
    char pasajeros[4][400][8][100];
    char opcion_menu[2];
    bool bandera = true;

    inicializarDatos(rutas);

    while (bandera)
    {
        mostrarMenu();
        printf("Ingrese una opcion: ");
        scanf("%s", opcion_menu);

        if (strcmp(opcion_menu, "1") == 0)
        {
            ventaPasaje(rutas, pasajeros);
            printf("---------------------------\n");
        }
        else if (strcmp(opcion_menu, "2") == 0)
        {
            buscarPasajeVendido(rutas, pasajeros);
            printf("---------------------------\n");
        }
        else if (strcmp(opcion_menu, "3") == 0)
        {
            buscarPasajero(rutas, pasajeros);
            printf("---------------------------\n");
        }
        else if (strcmp(opcion_menu, "4") == 0)
        {
            if (opcion_menu[1] == 'a')
            {
                ordenarYMostrarLista(rutas, pasajeros, true);
            }
            else if (opcion_menu[1] == 'b')
            {
                ordenarYMostrarLista(rutas, pasajeros, false);
            }
            else
            {
                printf("Opcion invalida.\n");
            }
            printf("---------------------------\n");
        }
        else if (strcmp(opcion_menu, "5") == 0)
        {
            if (opcion_menu[1] == 'a')
            {
                cantidadPasajesVendidosPorRuta(rutas);
            }
            else if (opcion_menu[1] == 'b')
            {
                porcentajeVentasPorRuta(rutas);
            }
            else
            {
                printf("Opcion invalida.\n");
            }
            printf("---------------------------\n");
        }
        else if (strcmp(opcion_menu, "salir") == 0)
        {
            printf("Gracias por usar el sistema de venta de pasajes aereo. ¡Hasta luego!\n");
            bandera = false;
        }
        else
        {
            printf("Opcion invalida. Por favor, intente de nuevo.\n");
        }
    }

    return 0;
}

void inicializarDatos(char rutas[4][5][100])
{
    // Buenos Aires - Bariloche
    strcpy(rutas[0][0], "Buenos Aires - Bariloche");
    strcpy(rutas[0][1], "120");
    strcpy(rutas[0][2], "0");
    strcpy(rutas[0][3], "150000");
    strcpy(rutas[0][4], "180000");

    // Buenos Aires - Salta
    strcpy(rutas[1][0], "Buenos Aires - Salta");
    strcpy(rutas[1][1], "120");
    strcpy(rutas[1][2], "0");
    strcpy(rutas[1][3], "120000");
    strcpy(rutas[1][4], "150000");

    // Rosario - Buenos Aires
    strcpy(rutas[2][0], "Rosario - Buenos Aires");
    strcpy(rutas[2][1], "80");
    strcpy(rutas[2][2], "0");
    strcpy(rutas[2][3], "70000");
    strcpy(rutas[2][4], "95000");

    // Mar del Plata - Mendoza
    strcpy(rutas[3][0], "Mar del Plata - Mendoza");
    strcpy(rutas[3][1], "80");
    strcpy(rutas[3][2], "0");
    strcpy(rutas[3][3], "95000");
    strcpy(rutas[3][4], "125000");
}

void mostrarMenu()
{
    printf("Bienvenido al sistema de venta de pasajes aéreos\n");
    printf("Seleccione una opción:\n");
    printf("1. Venta pasaje\n");
    printf("2. Buscar pasaje vendido\n");
    printf("3. Buscar pasajero\n");
    printf("4. Ordenar y mostrar lista pasajeros\n");
    printf("    a. Por número de asiento Ascendente\n");
    printf("    b. Por número de asiento Descendente\n");
    printf("5. Listados\n");
    printf("    a. Cantidad de pasajes vendidos por ruta aérea\n");
    printf("    b. Porcentaje de ventas por ruta aérea\n");
    printf("6. Salir\n");
}

void buscarPasajeVendido(char rutas[4][5][100], char pasajeros[4][400][8][100])
{
    char dni[100];
    int i, j;

    printf("Ingrese el DNI del pasajero: ");
    scanf("%s", dni);

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < atoi(rutas[i][2]); j++)
        {
            if (strcmp(pasajeros[i][j][2], dni) == 0)
            {
                printf("Nombre y Apellido: %s %s\n", pasajeros[i][j][0], pasajeros[i][j][1]);
                printf("Ruta: %s\n", rutas[i][0]);
                printf("DNI: %s\n", pasajeros[i][j][2]);
                printf("Teléfono: %s\n", pasajeros[i][j][3]);
                printf("Equipaje en bodega: %s\n", atoi(pasajeros[i][j][4]) ? "Sí" : "No");
                printf("Número pasajero frecuente: %s\n", pasajeros[i][j][5]);
                printf("Asiento: %s\n", pasajeros[i][j][6]);
                printf("Costo pasaje: $%s\n", pasajeros[i][j][7]);
                return;
            }
        }
    }
    printf("Pasajero no encontrado.\n");
}

void buscarPasajero(char rutas[4][5][100], char pasajeros[4][400][8][100])
{
    char nombre[100], apellido[100];
    int i, j;

    printf("Ingrese nombre: ");
    scanf("%s", nombre);
    printf("Ingrese apellido: ");
    scanf("%s", apellido);

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < atoi(rutas[i][2]); j++)
        {
            if (strcmp(pasajeros[i][j][0], nombre) == 0 && strcmp(pasajeros[i][j][1], apellido) == 0)
            {
                printf("Nombre y Apellido: %s %s\n", pasajeros[i][j][0], pasajeros[i][j][1]);
                printf("Ruta: %s\n", rutas[i][0]);
                printf("DNI: %s\n", pasajeros[i][j][2]);
                printf("Teléfono: %s\n", pasajeros[i][j][3]);
                printf("Equipaje en bodega: %s\n", atoi(pasajeros[i][j][4]) ? "Sí" : "No");
                printf("Número pasajero frecuente: %s\n", pasajeros[i][j][5]);
                printf("Asiento: %s\n", pasajeros[i][j][6]);
                printf("Costo pasaje: $%s\n", pasajeros[i][j][7]);
                return;
            }
        }
    }
    printf("Pasajero no encontrado.\n");
}

void ordenarYMostrarLista(char rutas[4][5][100], char pasajeros[4][400][8][100], bool ascendente)
{
    int rutaSeleccionada, vendidos, i, j, k;
    char temp[100];

    printf("Seleccione la ruta aérea:\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i + 1, rutas[i][0]);
    }
    scanf("%d", &rutaSeleccionada);
    rutaSeleccionada--;

    while (rutaSeleccionada < 0 || rutaSeleccionada > 3)
    {
        printf("Ruta inválida. Seleccione nuevamente la ruta aérea:\n");
        scanf("%d", &rutaSeleccionada);
        rutaSeleccionada--;
    }

    vendidos = atoi(rutas[rutaSeleccionada][2]);

    for (i = 0; i < vendidos - 1; i++)
    {
        for (j = 0; j < vendidos - i - 1; j++)
        {
            if ((ascendente && atoi(pasajeros[rutaSeleccionada][j][6]) > atoi(pasajeros[rutaSeleccionada][j + 1][6])) ||
                (!ascendente && atoi(pasajeros[rutaSeleccionada][j][6]) < atoi(pasajeros[rutaSeleccionada][j + 1][6])))
            {
                for (k = 0; k < 8; k++)
                {
                    strcpy(temp, pasajeros[rutaSeleccionada][j][k]);
                    strcpy(pasajeros[rutaSeleccionada][j][k], pasajeros[rutaSeleccionada][j + 1][k]);
                    strcpy(pasajeros[rutaSeleccionada][j + 1][k], temp);
                }
            }
        }
    }

    for (i = 0; i < vendidos; i++)
    {
        printf("Nombre y Apellido: %s %s\n", pasajeros[rutaSeleccionada][i][0], pasajeros[rutaSeleccionada][i][1]);
        printf("DNI: %s\n", pasajeros[rutaSeleccionada][i][2]);
        printf("Teléfono: %s\n", pasajeros[rutaSeleccionada][i][3]);
        printf("Equipaje en bodega: %s\n", atoi(pasajeros[rutaSeleccionada][i][4]) ? "Sí" : "No");
        printf("Número pasajero frecuente: %s\n", pasajeros[rutaSeleccionada][i][5]);
        printf("Asiento: %s\n", pasajeros[rutaSeleccionada][i][6]);
        printf("Costo pasaje: $%s\n", pasajeros[rutaSeleccionada][i][7]);
    }
}

void cantidadPasajesVendidosPorRuta(char rutas[4][5][100])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("Ruta: %s - Pasajes vendidos: %s\n", rutas[i][0], rutas[i][2]);
    }
}

void porcentajeVentasPorRuta(char rutas[4][5][100])
{
    int i, vendidos, capacidad;
    float porcentaje;
    for (i = 0; i < 4; i++)
    {
        vendidos = atoi(rutas[i][2]);
        capacidad = atoi(rutas[i][1]);
        porcentaje = (vendidos / (float)capacidad) * 100;
        printf("Ruta: %s - Porcentaje de ventas: %.2f%%\n", rutas[i][0], porcentaje);
    }
}
