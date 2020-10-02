#include "Empleados.h"
#define T 3
int main()
{
    eEmpleado ListaDeEmpleados[T];

    InicializarEmpleados(ListaDeEmpleados,T);

    DarDeAltaEmpleado(ListaDeEmpleados,T);
    DarDeAltaEmpleado(ListaDeEmpleados,T);
    DarDeAltaEmpleado(ListaDeEmpleados,T);
    DarDeAltaEmpleado(ListaDeEmpleados,T);

    return 0;
}

