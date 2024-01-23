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
    int h=0;
    struct alumno a[200];
    do
    {
        printf("Seleccione una opcion: \n");
        printf("1. Ingresar un nuevo alumno \n");
        printf("2. Mostrar los alumnos \n");
        printf("3. Salir del programa \n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
        
            printf("Ingresar alumnos \n");
            printf("Ingrese la matricula \n");
            scanf("%d", &a[h].matricula);
            fflush(stdin);
            printf("Ingrese el nombre del alumno \n");
            fgets(a[h].nombre, sizeof a[h].nombre, stdin);
            printf("Ingrese la direccion \n");
            fgets(a[h].direccion, sizeof a[h].direccion, stdin);
            printf("Ingrese la materia \n");
            fgets(a[h].materia, sizeof a[h].materia, stdin);
            printf("Ingrese la nota \n");
            scanf("%f", &a[h].nota); 
            fflush(stdin);
            
            
            h++;
            break; 
        case 2:
            printf("Mostrar alumnos \n");
            FILE *archivo;
            archivo=fopen("datos.txt","r");
            printf("estos son los datos");
            fclose(archivo);
            break;
        case 3:
            printf("Gracias por usar el programa \n");
            break;
        default:
            printf("La opcion no existe \n");
            break;
        }
    } while (i!=3);
    FILE *archivo;
            archivo=fopen("datos.txt","a+");
            if (archivo!=NULL)
            {
                
                printf(a[h].matricula,archivo);
                
                fputs(a[h].nombre,archivo);
                
                fputs(a[h].direccion,archivo);
                
                fputs(a[h].materia,archivo);
                
                

            }else
            {
                if (archivo!=NULL)
                {
                    while (!feof(archivo));
                {
                    printf(a[h].matricula,archivo);
                    fputs(a[h].nombre,archivo);
                    fputs(a[h].direccion,archivo);
                    fputs(a[h].materia,archivo);
                }
                }
            }
            
            fclose(archivo);
    return 0;
}
