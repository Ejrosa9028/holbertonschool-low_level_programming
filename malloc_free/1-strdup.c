#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies the string pointed to by src
 * @str: pointer to the destination buffer
 *
 * Return: pointer to dest
 */
char *_strdup(char *str)
{
	char *tmp;
	int length;
	int i;

	/*Si el string es 0, devuelve NULL*/
	if (str == 0)
	{
		return (NULL);
	}

	/*Calcula el largo del string*/
	for (length = 0; str[length] != '\0'; length++)
	{
	}

	/*Asignar memoria para duplicar el string*/
	tmp = malloc(sizeof(char) * *str);

	if (tmp == 0)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		tmp[i] = str[i];
	}

	tmp[length] = '\0';

	return (tmp);
}
