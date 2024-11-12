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
	int i;
	int j = 0;
	int len1 = 0;
	int len2 = 0;

	/*Si s1 es igual a 0, devuelve NULL*/
	if (s1 == 0)
	{
		s1 = " ";
	}

	/*Si s2 es igual a 0, devuelve NULL*/
	if (s2 == 0)
	{
		s2 = " ";
	}

	/*Calcula el largo de s1*/
	while (s1[len1] != '\0')
	{
		len1++;
	}

	/*Calcula el largo de s2*/
	while (s2[len2] != '\0')
	{
		len2++;
	}

	/*Asigna memoria para el string*/
	tmp = malloc(sizeof(char) * (len1 + len2 + 1)); /*+1 por el Null*/

	/*Si el malloc llega a 0, devuelve NULL*/
	if (tmp == 0)
	{
		return (NULL);
	}

	/*copia el primer string (s1) a tmp*/
	for (i = 0; i < len1; i++)
	{
		tmp[i + j] = s1[i];
	}

	/*Copia el segundo string (s2) a tmp*/
	for (j = 0; j < len2; j++)
	{
		tmp[i + j] = s2[j];
	}

	/*Terminación nula de la cadena concatenada*/
	tmp[i + j] = '\0';

	return (tmp);
}
