#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - copies the string pointed to by src
 * @b: pointer to the destination buffer
 *
 * Return: pointer to dest
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);  /*Intentamos asignar la memoria de tamaño 'b'*/

	if (ptr == NULL)  /*Si malloc falla y devuelve NULL*/
	{
		exit(98);  /*Termina el programa con el código de salida 98*/
	}

	return (ptr);  /*Si la asignación fue exitosa, devuelve el puntero*/
}
