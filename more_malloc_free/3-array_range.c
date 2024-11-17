#include "main.h"
#include <stdlib.h>  /*Para malloc y free*/

/**
 * array_range - Concatenates two strings with s of the second string.
 * @min: First string.
 * @max: Second string.
 *
 * Return: Pointer to the memory containing the concatenated string,
 */
int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	/*Si min es mayor que max, devuelve NULL*/
	if (min > max)
		return (NULL);

	/*Calculamos el tamaño del arreglo*/
	size = max - min + 1;

	/*Asignamos memoria para el arreglo*/
	array = malloc(size * sizeof(int));

	/*Si malloc falla, devuelve NULL*/
	if (array == NULL)
		return (NULL);

	/*Llenamos el arreglo con los valores de min a max*/
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	/*Devolvemos el puntero al arreglo creado*/
	return (array);
}
