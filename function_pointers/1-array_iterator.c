#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - Ejecuta una función dada como parámetro sobre cada
 * elemento de un arreglo.
 * @array: El arreglo de enteros.
 * @size: El número de elementos en el arreglo.
 * @action: Puntero a la función que se ejecutará sobre cada elemento.
 *
 * Return: Nada. Solo ejecuta la acción sobre cada elemento del arreglo.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]); /*Llama a función apuntada por action en cada elemento*/
	}
}
