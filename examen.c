#include <stdio.h>
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
};

int main(int argc, char const *argv[])
{
    int i;
    struct alumno a[200];
    do
    {
        printf("Seleccione una opcion: ");
        printf("1. Ingresar un nuevo alumno");
        printf("2. Mostrar los alumnos");
        printf("3. Salir del programa");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            printf("Ingresar alumnos");
            break;
        case 2:
            printf("Mostrar alumnos");
            break;
        case 3:
            printf("Gracias por usar el programa");
            break;
        default:
            printf("La opcion no existe");
            break;
        }
    } while (i!=3);
    
        

    return 0;
}
