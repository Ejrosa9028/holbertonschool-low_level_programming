#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - copies the string pointed to by src
 * @size: pointer to the destination buffer
 * @c: pointer to the source string
 *
 * Return: pointer to dest
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	/*Si size es 0, devuelve NULL*/
	if (size == 0)
	{
		return (NULL);
	}

	/*Asigna memoria para el array.*/
	arr = malloc(sizeof(char) * size);

	/*Si el malloc falla, devuelve NULL*/
	if (arr == NULL)
	{
		return (NULL);
	}

	/*Inicializar cada elemento del array con el carácter 'c'.*/
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	/*Devuelve el puntero del array*/
	return (arr);
}
