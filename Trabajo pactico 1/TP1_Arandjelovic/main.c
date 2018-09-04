#include <stdio.h>
#include <stdlib.h>
#include "TP1.h"

int main()
{

    float numero1 ;
    float numero2 ;
    float resultado ;
    float resultado2 ;
    int seleccion ;
    while(seleccion != '5')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",numero1) ;
        printf("2- Ingresar 2do operando (B=%.2f)\n",numero2) ;
        printf("3- Calcular todas las operaciones \n") ;
        printf("\t a) Calcular la suma\n") ;
        printf("\t b) Calcular la resta (A-B)\n") ;
        printf("\t c) Calcular la division (A/B)\n") ;
        printf("\t d) Calcular la multiplicacion (A*B)\n") ;
        printf("\t e) Calcular el factorial (A!)\n") ;
        printf("4. Informar los resultados\n") ;
        printf("5- Salir\n") ;
        printf("5- Escoja una de las opciones\n") ;

        scanf("%d",&seleccion) ;
        if (seleccion < 1 || seleccion > 9)
        {
            printf("La selecion no es valida, marque una opcion del 1 al 5\n") ;
            scanf("%d",&seleccion) ;
        }
        else
        {
            switch(seleccion)
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
                    resultado = suma(numero1 , numero2) ;
                    resultado = resta(numero1 , numero2) ;
                    resultado = division(numero1 , numero2) ;
                    resultado = multiplicacion(numero1 , numero2) ;
                    resultado = factorial(numero1 , numero2) ;
                    resultado = factorial1(numero1 , numero2) ;
                    break ;

                case 4 :

                    printf("El resultado de A+B es: %.2f \n", resultado)  ;
                    printf("El resultado de A-B es: %.2f \n", resultado)  ;
                    printf("El resultado de A/B es: %.2f \n", resultado) ;

                    if(division == 0)
                    {
                        printf("No es posible dividir por cero\n") ;
                    }
                    else
                    {
                        printf("El resultado de A*B es: %.2f \n", resultado)  ;
                    }

                    printf("El resultado de AB es: %.2f \n", resultado)  ;
                    printf("El resultado de A+B es: %.2f \n",resultado2)  ;
                    break ;

            }
            }
        }

    return 0;
}

