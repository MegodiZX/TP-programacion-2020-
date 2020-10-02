#include <stdio.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO 2
typedef struct
{
    int id;
    char nombre[51];
    char apellido[51];
    float salario;
    int sector;
    int estado;
}eEmpleado;

void InicializarEmpleados(eEmpleado lista[],int tam);
int BuscarLibre(eEmpleado lista[],int tam);
eEmpleado CrearUnEmpleado(int id);
void DarDeAltaEmpleado(eEmpleado lista[],int tam);
void MostrarEmpleados(eEmpleado lista[],int tam);
void MensajeError(void);
int TomarEntero(char mensaje[]);
void ModificarEmpleado(eEmpleado lista[],int tam);
void DarDeBajaUnEmpleado(eEmpleado lista[],int tam);
