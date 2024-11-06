#include "main.h"
#include <string.h>

/**
 * _strpbrk - busca la primera ocurrencia en s de cualquier byte en accept
 * @s: la cadena donde buscar
 * @accept: la cadena de caracteres que se buscan en s
 *
 * Return: un puntero al primer carácter de s que coincida con cualquier
 *         carácter de accept o NULL si no se encuentra ninguna coincidencia
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0') /*Mientras no lleguemos al final de la cadena s*/
	{
		char *ptr = accept; /*Reiniciamos ptr a la cadena accept*/

		/*Comparamos caracter actual de s con cada uno de los caracteres de accept*/
		while (*ptr != '\0')
		{
			if (*s == *ptr) /*Si encontramos una coincidencia*/
			{
				return (s); /*Retornamos el puntero a la coincidencia en s*/
			}
			ptr++; /*Avanzamos al siguiente caracter de accept*/
		}
		s++; /*Avanzamos el siguiente caracter de s*/
	}

	return (NULL); /*Si no encontramos ninguna coincidencia, retornamos NULL*/
}
