#include <stdio.h>

int main(int argc, char const *argv[])
{

    struct alumno
    {
        int matricula;
        char nombre[50];
        char direccion[50];
        char carrera[50];
        float promedio;
    } alumno1 = {100, "Juan Perez", "Quito", "Software", 5.0};

    struct alumno alumno2 = {159, "Ana Paola", "Riobamba", "Software", 9.2};

    printf("Datos del alumno:\n");
    printf("Numero de matricula: %d\n", alumno1.matricula);
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Direccion: %s\n", alumno1.direccion);
    printf("Carrera: %s\n", alumno1.carrera);
    printf("Promedio: %.2f\n", alumno1.promedio);
    printf("\n");
    return 0;
}