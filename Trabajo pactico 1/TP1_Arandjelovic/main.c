#include <stdio.h>
#include <stdlib.h>
#include "TP1.h"
//#include "FuncionesTP1.c"
#include <stdbool.h>

int main()
{

    float numero1 ;
    float numero2 ;
    float sumaNumeros ;
    float restaNumeros ;
    float divideNumeros ;
    float multiplicaNumeros ;
    float factorialA ;
    float factorialB ;
    float resultado ;
    float resultado2 ;

    int seleccion ;
    do
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
        printf("Escoja una de las opciones\n") ;

        scanf("%d",&seleccion) ;
        if (seleccion < 1 || seleccion > 5)
        {
            printf("La selecion no es valida, marque una opcion del 1 al 5\n") ;
            scanf("%d",&seleccion) ;
        }
        else
        {
            switch(seleccion)
            {
                case 1 :
                    system("cls") ;
                    printf("Ingrese el valor de A\n") ;
                    scanf("%f",&numero1) ;

                    break ;

                case 2 :
                    system("cls") ;
                    printf("Ingrese el valor de B\n") ;
                    scanf("%f",&numero2) ;


                    break ;

                case 3 :
                    system("cls") ;
                    sumaNumeros = suma(numero1 , numero2, resultado) ;
                    restaNumeros = resta(numero1 , numero2, resultado) ;
                    divideNumeros = division(numero1 , numero2, resultado) ;
                    multiplicaNumeros = multiplicacion(numero1 , numero2, resultado) ;
                    factorialA = factorial(numero1 , resultado) ;
                    factorialB = factorial1(numero2 , resultado2) ;





                    break ;

                case 4 :
                    system("cls") ;

                    if(divideNumeros == 0)
                    {
                        printf("El resultado de A+B es: %.2f \n", sumaNumeros)  ;
                        printf("El resultado de A-B es: %.2f \n", restaNumeros)  ;
                        printf("No es posible dividir por cero\n") ;
                        printf("El resultado de A*B es: %.2f \n", multiplicaNumeros)  ;
                        printf("El factorial de A es: %.2f \n", factorialA)  ;
                        printf("El factorial de B es: %.2f \n", factorialB)  ;

                    }
                    else
                    {
                        printf("El resultado de A+B es: %.2f \n", sumaNumeros)  ;
                        printf("El resultado de A-B es: %.2f \n", restaNumeros)  ;
                        printf("El resultado de A/B es: %.2f \n", divideNumeros) ;
                        printf("El resultado de A*B es: %.2f \n", multiplicaNumeros)  ;
                        printf("El factorial de A es: %.2f \n", factorialA)  ;
                        printf("El factorial de B es: %.2f \n", factorialB)  ;
                    }

                    break ;
            }
            }
    }
    while(seleccion != 5) ;
    return 0;
}

