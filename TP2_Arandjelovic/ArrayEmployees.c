#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define CANT 1000



/** brief Para indicar que todas las posiciones en la matriz est�n vac�as,
* esta funci�n puso la bandera (isEmpty) en VERDADERO en todos
* posici�n de la matriz
* \ param list Employee * Puntero a matriz de empleados
* \ param len int Longitud de la matriz
* \ return int Devuelve (-1) si Error [Longitud no v�lida o puntero NULL] - (0) si est� bien
*/

int initEmployees(Employee* list, int len)
{
return 0;
}


/** brief agrega en una lista existente de empleados los valores recibidos como par�metros
* en la primera posici�n vac�a
* \ param lista empleado *
* \ param len int
* \ param id int
* \ param nombre [] char
* \ param lastName [] char
* \ param sueldo flotante
* \ param sector int
* \ return int Devuelve (-1) si Error [Longitud no v�lida o puntero NULL o sin
espacio libre] - (0) si est� bien
*/
int addEmployee(Employee* list, int len, int id, char name[],char
lastName[],float salary,int sector)
{
return -1;
}

/**\ brief find a Employee by Id en devuelve la posici�n del �ndice en la matriz.
*
* \ param list Employee *
* \ param len int
* \ param id int
* \ return Devuelve la posici�n del �ndice del empleado o (-1) si [Longitud inv�lida o NULL
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
* \ return int Devuelva (-1) si Error [Longitud no v�lida o puntero NULL o si no puede
encontrar un empleado] - (0) si est� bien
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
* \ return int Devuelve (-1) si Error [Longitud no v�lida o puntero NULL] - (0) si est� bien
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
 * \brief Solicita un n�mero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

