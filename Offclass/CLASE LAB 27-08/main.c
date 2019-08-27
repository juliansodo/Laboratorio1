#include <stdio.h>
#include <stdlib.h>

    void crearCliente();
    void eliminarCliente(int);
    void registrarCliente(char nombre[20], char apellido[20], int);

int main()
{
    int opcion;

    do
    {

        printf("1 - ALTA Cliente \n 2 - BAJA Cliente \n 3 - MODIFICACION Cliente \n 4- Salir \n Opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1: crearCliente();
            break;
        case 2: ;
            break;
        case 3: ;
            break;
        case 4: ;
            break;
        }
    }
    while(opcion != 0 );
    return 0;
}

void crearCliente()
{
    char nombre [20];
    char  apellido [20];
    int dni;
    printf("Ingrese un nombre: \n"); scanf("%s", &nombre);
    printf("Ingrese un apellido: \n"); scanf("%s", &apellido);
    printf("Ingrese un DNI: \n"); scanf("%d", &dni);

    registrarCliente(nombre,apellido,dni);
}

void eliminarCliente(int dni)
{

}

void registrarCliente(char nombre[20], char apellido[20], int dni)
{
    FILE * clientes = fopen("Clientes.txt", "a");
    fprintf(clientes, "Nombre: %s\n", nombre);
    fprintf(clientes, "Apellido: %s\n", apellido);
    fprintf(clientes, "DNI: %d\n", dni);
    fprintf(clientes, "----------\n");
    fclose(clientes);
}
