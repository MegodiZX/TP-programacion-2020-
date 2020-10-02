#include "Empleados.h"
#include "Menu.h"
#define T 3
int main()
{
    eEmpleado ListaDeEmpleados[T];

    InicializarEmpleados(ListaDeEmpleados,T);

    menu(ListaDeEmpleados,T);

    return 0;
}
