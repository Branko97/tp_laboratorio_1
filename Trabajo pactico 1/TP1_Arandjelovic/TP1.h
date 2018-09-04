#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED

    /**
    *    \brief suma dos valores
    *    \param operador01 y operador02, son los que se van a sumar
    *    \return devuelve la suma de ambos
    */

float suma(float valorA , float valorB , float resultante)
{
    resultante = valorA + valorB ;
    return resultante ;
}
    /**
    *    \brief resta dos valores
    *    \param operador01 y operador02, son los que se van a restar
    *    \return devuelve la resta de ambos
    */

float resta(float valorA , float valorB , float resultante)
{
    resultante = valorA - valorB ;
    return resultante ;
}
    /**
    *    \brief divide dos valores
    *    \param operador01 y operador02, son los que se van a dividir
    *    \return devuelve la division de ambos
    */



float division(float valorA , float valorB, float resultante )
{
    resultante = valorA / valorB ;
    return resultante ;
}
    /**
    *    \brief multiplica dos valores
    *    \param operador01 y operador02, son los que se van a multiplicar
    *    \return devuelve la multiplicacion de ambos
    */


float multiplicacion(float valorA , float valorB , float resultante )
{
    resultante = valorA * valorB ;
    return resultante ;
}
    /**
    *    \brief Toma un valor y calcula su factorial
    *    \param operador es el numero al cual se le aplicara el factorial
    *    \return el factorial de operador
    */

float factorial(float valorA , float cantidad , float resultante )
{
    int factorial = 1 ;
    for(cantidad = valorA ; cantidad > 1 ; cantidad -- )
    {
        resultante = factorial * cantidad ;
        return resultante ;
    }
}
float factorial1(float valorB , float cantidad , float resultante1 )
{
    int factorial = 1 ;
    for(cantidad = valorB ; cantidad > 1 ; cantidad -- )
    {
        resultante1 = factorial * cantidad ;
        return resultante1 ;
    }
}


#endif  TP1_H_INCLUDED
