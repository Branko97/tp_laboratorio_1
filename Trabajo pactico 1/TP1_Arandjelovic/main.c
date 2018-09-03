#include <stdio.h>
#include <stdlib.h>
//#include <TP1.h>


int main()
{

    float numero1 ;
    float numero2 ;
    float resultado ;
    float resultado2 ;
    int seleccion ;
    char respuesta = 's' ;
    while(respuesta == 's')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",numero1) ;
        printf("2- Ingresar 2do operando (B=%.2f)\n",numero2) ;
        printf("3- Calcular la suma (A+B)\n") ;
        printf("4- Calcular la resta (A-B)\n") ;
        printf("5- Calcular la division (A/B)\n") ;
        printf("6- Calcular la multiplicacion (A*B)\n") ;
        printf("7- Calcular el factorial (A!)\n") ;
        printf("8- Calcular todas las operaciones \n") ;
        printf("9- Salir\n") ;

        scanf("%d",&seleccion) ;
        if (seleccion < 1 || seleccion > 9)
        {
            printf("La selecion no es valida, marque una opcion del 1 al 9\n") ;
            scanf("%d",&seleccion) ;
        }
        else
        {
            swicht(seleccion)
            {
                case 1 :
                    printf("Ingrese el valor de A\n") ;
                    scanf("%f",&numero1) ;
                    break ;

                case 2 :
                    printf("Ingrese el valor de B\n") ;
                    scanf("%f",&numero2) ;
                    break ;

                case 3 :




                case 4 :


                case 5 :


                case 6 :

                case 7 :

                case 8 :

                case 9 :

            }
        }





    }


    return 0;
}
