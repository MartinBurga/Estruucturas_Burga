#include <stdio.h>

int opcion;
int num;

int main()
{

    struct alumno
    {
        int matricula;
        char nombre[50];
        char direccion[50];
        char carrera[50];
        float promedio;
    };

    printf("Bienvenido al registro de alumnos. Inserta la opción que deseas realizar.\n");
    printf("1. Ingresar datos.\n");
    printf("2. Imprimir datos.\n");
    scanf("%d", &opcion);

    do
    {
        if (opcion == 1)
        {
            printf("Ingresar el nombre del estudiante\n");
        }
        else if (opcion == 2)
        {

            printf("Datos de los alumnos ingresados:\n");
            for (int i = 0; i < num; ++i)
            {
                printf("\nMatrícula: %d\n", alumnos[i].matricula);
                printf("Nombre: %s\n", alumnos[i].nombre);
                printf("Dirección: %s\n", alumnos[i].direccion);
                printf("Carrera: %s\n", alumnos[i].carrera);
                printf("Promedio: %.2f\n", alumnos[i].promedio);
            }
        }

        printf("Elige la opcion a realizar.\n");
        printf("1. Insertar datos.\n");
        printf("2. Imprimir los datos.\n");
        printf("0. Salir.\n");
    } while (opcion != 0);

    return 0;
}