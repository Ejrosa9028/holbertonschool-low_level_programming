#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - copies the string pointed to by src
 * @array: pointer to the destination buffer
 * @size: pointer to the source string
 * @cmp: pointer to the source
 *
 * Return: pointer to dest
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);  /*Si no se encuentra ningún elemento que cumpla la condición*/
}
