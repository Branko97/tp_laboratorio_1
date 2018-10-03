#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define CANT 1000


int main()
{
    int seleccion ;
    Employee empleados[CANT] ;
    initEmployees(empleados,CANT) ;
    seleccion = getInt("\n\n\n1 - ALTA \n2 - MODIFICACION \n3 - BAJA\n4 - LISTAR\n5 - SALIR\n\n\n") ;

do
{


    switch (seleccion)
    {
        case 1 :
        system("cls") ;

        break ;
        case 2 :
        system("cls") ;

        break ;
        case 3 :
        system("cls") ;

        break ;
        case 4 :
        system("cls") ;

        break ;
        case 5 :
        system("cls") ;

        break ;
    }
    }

while(seleccion !=5) ;

    return 0 ;
}
