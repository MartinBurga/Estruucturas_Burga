#include <stdio.h>

int opcion;
int num;

struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};

struct alumno alumnos[100];

int main()
{
    printf("Bienvenido al registro de alumnos. Inserta la opcion que deseas realizar.\n");
    printf("1. Ingresar datos.\n");
    printf("2. Imprimir datos.\n");
    scanf("%d", &opcion);

    do
    {
        if (opcion == 1)
        {
            printf("Ingrese la cantidad de alumnos:\n");
            scanf("%d", &num);

            for (int i = 0; i < num; ++i)
            {
                printf("Ingrese los datos del alumno %d:\n", i + 1);

                printf("Ingrese la matricula del alumno: ");
                scanf("%d", &alumnos[i].matricula);

                printf("Ingrese el nombre del alumno: ");
                scanf("%s", alumnos[i].nombre);

                printf("Ingrese la direccion del alumno: ");
                scanf("%s", alumnos[i].direccion);

                printf("Ingrese la carrera del alumno: ");
                scanf("%s", alumnos[i].carrera);

                printf("Ingrese el promedio del alumno: ");
                scanf("%f", &alumnos[i].promedio);
            }
        }
        else if (opcion == 2)
        {
            printf("Datos de los alumnos ingresados:\n");
            for (int i = 0; i < num; ++i)
            {
                printf("Matricula: %d\n", alumnos[i].matricula);
                printf("Nombre: %s\n", alumnos[i].nombre);
                printf("Direccion: %s\n", alumnos[i].direccion);
                printf("Carrera: %s\n", alumnos[i].carrera);
                printf("Promedio: %.2f\n", alumnos[i].promedio);
            }
        }

        printf("Elige la opcion a realizar.\n");
        printf("1. Insertar datos.\n");
        printf("2. Imprimir los datos.\n");
        printf("0. Salir.\n");
        scanf("%d", &opcion);
    } while (opcion != 0);

    return 0;
}
