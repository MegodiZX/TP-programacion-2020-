#include "Empleados.h"
void InicializarEmpleados(eEmpleado lista[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        lista[i].estado=LIBRE;
    }
}//todos los estados a libre

int BuscarLibre(eEmpleado lista[],int tam)
{
    int i;
    int posicionLibre;
    posicionLibre=-1;
    for(i=0;i<tam;i++)
    {
        if(lista[i].estado==LIBRE)
        {
            posicionLibre=i;
            break;
        }
    }
    return posicionLibre;//si devuelve -1 no se encontro posicion libre
}

eEmpleado CrearUnEmpleado(int id)
{
    eEmpleado empleadoACrear;
    empleadoACrear.id=id;
    printf("Ingrese nombre del Empleado: ");
    fflush(stdin);
    gets(empleadoACrear.nombre);
    printf("Ingrese apellido del Empleado: ");
    fflush(stdin);
    gets(empleadoACrear.apellido);
    printf("Ingrese salario del Empleado: ");
    scanf("%d",&empleadoACrear.salario);
    printf("Ingrese sector del Empleado: ");
    scanf("%d",&empleadoACrear.sector);
    empleadoACrear.estado=OCUPADO;

    return empleadoACrear;

}

void DarDeAltaEmpleado(eEmpleado lista[],int tam)
{
    int posicion;
    posicion=BuscarLibre(lista,tam);
    if(posicion!=-1)
    {
        lista[posicion]=CrearUnEmpleado(posicion+1);
    }else
    {
        printf("No quedan espacio libres");
    }
}
