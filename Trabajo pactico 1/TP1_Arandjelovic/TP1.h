#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED

    /**
    *    \brief suma dos valores
    *    \param valorA y valorB son los que se van a sumar
    *    \return devuelve el resultado de la suma de ambos
    */

float suma(float valorA , float valorB , float resultanteSuma)
{
    resultanteSuma = valorA + valorB ;
    return resultanteSuma ;
}
    /**
    *    \brief resta dos valores
    *    \param valorA y valorB son los que se van a restar
    *    \return devuelve el resultado de la resta de ambos
    */

float resta(float valorA , float valorB , float resultanteResta)
{
    resultanteResta = valorA - valorB ;
    return resultanteResta ;
}
    /**
    *    \brief divide dos valores
    *    \param valorA y valorB, son los que se van a dividir
    *    \return devuelve el resultado de la division de ambos
    */



float division(float valorA , float valorB, float resultanteDivision )
{
    resultanteDivision = valorA / valorB ;
    return resultanteDivision ;
}
    /**
    *    \brief multiplica dos valores
    *    \param valorA y valorB, son los que se van a multiplicar
    *    \return devuelve el resultado de la multiplicacion de ambos
    */


float multiplicacion(float valorA , float valorB , float resultanteMultiplicacion)
{
    resultanteMultiplicacion = valorA * valorB ;
    return resultanteMultiplicacion ;
}
    /**
    *    \brief Toma un valor y calcula su factorial
    *    \param valorA es el numero al cual se le aplicara el factorial
    *    \return devuelve el factorial de valorA
    */

float factorial(float valorA , float cantidad , float resultanteFactorialA )
{
    float factorial = 1 ;
    for(cantidad = valorA ; cantidad > 1 ; cantidad -- )
    {
        resultanteFactorialA = factorial * cantidad ;

    }
return resultanteFactorialA ;
}
 /**
    *    \brief Toma un valor y calcula su factorial
    *    \param valorB es el numero al cual se le aplicara el factorial
    *    \return devuelve el factorial de valorB
    */
float factorial1(float valorB , float cantidad , float resultanteFactorialB)
{
    int factorial = 1 ;
    for(cantidad = valorB ; cantidad > 1 ; cantidad -- )
    {
        resultanteFactorialB = factorial * cantidad ;
    }
return resultanteFactorialB ;

}


#endif // TP1_H_INCLUDED
