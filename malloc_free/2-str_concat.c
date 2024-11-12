#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - copies the string pointed to by src
 * @s1: pointer to the destination buffer
 * @s2: pointer to the source string
 *
 * Return: pointer to dest
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int i, j = 0;
	int len1 = 0, len2 = 0;

	if (s1 == 0) /*Si s1 es igual a 0, devuelve NULL*/
	{
		s1 = " ";
	}
	else if (s2 == 0) /*Si s2 es igual a 0, devuelve NULL*/
	{
		s2 = " ";
	}

	for (; s1[len1] != '\0'; len1++) /*Calcula el largo de s1 y s2*/
	{
		for (; s2[len2] != '\0'; len2++)
		{
		}
	}
	/*Asigna memoria para el string*/
	tmp = malloc(sizeof(char) * (len1 + len2 + 1)); /*+1 por el nulo*/

	if (tmp == 0) /*Si el malloc llega a 0, devuelve NULL*/
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++) /*Copia el primer string (s1) a tmp*/
	{
		tmp[i + j] = s1[i];
	}

	for (j = 0; j < len2; j++) /*Copia el segundo string (s2) a tmp*/
	{
		tmp[i + j] = s2[j];
	}

	tmp[i + j] = '\0'; /*Terminacion nula de la cadena concatenada*/

	return (tmp);
}
