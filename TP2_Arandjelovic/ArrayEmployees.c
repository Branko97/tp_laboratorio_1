#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define CANT 1000



/** brief Para indicar que todas las posiciones en la matriz están vacías,
* esta función puso la bandera (isEmpty) en VERDADERO en todos
* posición de la matriz
* \ param list Employee * Puntero a matriz de empleados
* \ param len int Longitud de la matriz
* \ return int Devuelve (-1) si Error [Longitud no válida o puntero NULL] - (0) si está bien
*/

int initEmployees(Employee* list, int len)
{
return 0;
}


/** brief agrega en una lista existente de empleados los valores recibidos como parámetros
* en la primera posición vacía
* \ param lista empleado *
* \ param len int
* \ param id int
* \ param nombre [] char
* \ param lastName [] char
* \ param sueldo flotante
* \ param sector int
* \ return int Devuelve (-1) si Error [Longitud no válida o puntero NULL o sin
espacio libre] - (0) si está bien
*/
int addEmployee(Employee* list, int len, int id, char name[],char
lastName[],float salary,int sector)
{
return -1;
}

/**\ brief find a Employee by Id en devuelve la posición del índice en la matriz.
*
* \ param list Employee *
* \ param len int
* \ param id int
* \ return Devuelve la posición del índice del empleado o (-1) si [Longitud inválida o NULL
puntero recibido o empleado no encontrado
*
*/
int findEmployeeById(Employee* list, int len,int id)
{


return 0 ;
}


/** \ brief Eliminar un empleado por ID (ponga isEmpty Flag en 1)
*
* \ param list Employee *
* \ param len int
* \ param id int
* \ return int Devuelva (-1) si Error [Longitud no válida o puntero NULL o si no puede
encontrar un empleado] - (0) si está bien
*
*/
int removeEmployee(Employee* list, int len, int id)
{
return -1;
}


/** \ brief Ordena los elementos en la matriz de empleados, el orden de los argumentos
indicar orden UP o DOWN
*
* \ param list Employee *
* \ param len int
* \ param order int [1] indica UP - [0] indica DOWN
* \ return int Devuelve (-1) si Error [Longitud no válida o puntero NULL] - (0) si está bien
*
*/
int sortEmployees(Employee* list, int len, int order)
{
return 0;
}


/** \ brief imprimir el contenido de la matriz de empleados
*
* \ param list Employee *
* \ param longitud int
* \ return int
*
*/
int printEmployees(Employee* list, int length)
{
return 0;
}

/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

