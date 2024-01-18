#include <stdio.h>
#include <string.h>

int opcion;
int num;

struct alumno {
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};

int main() {
    struct alumno alumnos[100];

    printf("Bienvenido al registro de alumnos. Inserta la opcion que deseas realizar.\n");
    printf("1. Ingresar datos.\n");
    printf("2. Imprimir datos.\n");
    scanf("%d", &opcion);

    do {
        if (opcion == 1) {
            printf("Ingrese la cantidad de alumnos:\n");
            scanf("%d", &num);

            for (int i = 0; i < num; ++i) {
                printf("Ingrese los datos del alumno %d:\n", i + 1);

                printf("Ingrese la matricula del alumno: ");
                scanf("%d", &alumnos[i].matricula);

                printf("Ingrese el nombre del alumno: ");
                getchar();
                fgets(alumnos[i].nombre, sizeof(alumnos[i].nombre), stdin);
                alumnos[i].nombre[strcspn(alumnos[i].nombre, "\n")] = '\0';

                printf("Ingrese la direccion del alumno: ");
                fgets(alumnos[i].direccion, sizeof(alumnos[i].direccion), stdin);
                alumnos[i].direccion[strcspn(alumnos[i].direccion, "\n")] = '\0';

                printf("Ingrese la carrera del alumno: ");
                fgets(alumnos[i].carrera, sizeof(alumnos[i].carrera), stdin);
                alumnos[i].carrera[strcspn(alumnos[i].carrera, "\n")] = '\0';

                printf("Ingrese el promedio del alumno: ");
                scanf("%f", &alumnos[i].promedio);
                fflush(stdin);
            }
        }
        else if (opcion == 2) {
            printf("Datos de los alumnos ingresados:\n");
            for (int i = 0; i < num; ++i) {
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
