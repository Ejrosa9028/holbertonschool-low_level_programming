#include "main.h"
#include <stdio.h>

/**
 * _strstr - Busca la primera aparición de la subcadena en el de cadenas.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: Un puntero al principio de la subcadena, o NULL si no se encuentra.
 */
char *_strstr(char *haystack, char *needle)
{

	/*Si needle es una cadena vacía, devuelve haystack*/
	if (*needle == '\0')
	{
		return (haystack);
	}

	/*Recorremos la cadena haystack*/
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		/*Comparamos la subcadena desde la posición actual de haystack*/
		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		/*Si llegamos al final de needle, sign que hemos encontrado la subcadena*/
		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	/*Si no se encontró la subcadena, devolvemos NULL*/
	return (NULL);
}
