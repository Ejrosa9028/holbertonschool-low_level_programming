#include "main.h"
/**
 * _strcat - Imprime el resultado
 *
 * @dest: recoge el numero del resultado
 *
 * @src: recoge el valor del ultimo digito
 *
 * Return: El valor del ultimo digito
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
