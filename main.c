#include <stdio.h>

int opcion;

int main()
{

    struct alumno
    {
        int matricula;
        char nombre[50];
        char direccion[50];
        char carrera[50];
        float promedio;
    } alumno1 = {100, "Juan Perez", "Quito", "Software", 5.0};

    printf("Bienvenido al registro de alumnos. Inserta la opción que deseas realizar.\n");
    printf("1. Ingresar datos.\n");
    printf("2. Imprimir datos.\n");
    scanf("%d", &opcion);

    do
    {
        if (opcion==1)
        {
            printf("Ingresar el nombre del estudiante\n");
            scanf("%s", nombre[50]);

        } else if (opcion == 2) {
        
            printf("Datos del alumno:\n");
            printf("Numero de matricula: %d\n", alumno1.matricula);
            printf("Nombre: %s\n", alumno1.nombre);
            printf("Direccion: %s\n", alumno1.direccion);
            printf("Carrera: %s\n", alumno1.carrera);
            printf("Promedio: %.2f\n", alumno1.promedio);
            printf("\n");
        }
    } while (opcion != 2);

    return 0;
}