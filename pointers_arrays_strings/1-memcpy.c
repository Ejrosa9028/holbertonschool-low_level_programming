#include "main.h"

/**
 * _memcpy - Imprime si es Fizz o Buzz
 *
 * @dest: recoge el numero del resultado
 *
 * @src: recoge el numero del resultado
 *
 * @n: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = *src + i;
	}

	return (dest);
}
