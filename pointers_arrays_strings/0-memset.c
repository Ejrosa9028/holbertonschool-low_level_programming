#include "main.h"

/**
 * _memset - Imprime si es Fizz o Buzz
 *
 * @s: recoge el numero del resultado
 *
 * @b: recoge el numero del resultado
 *
 * @n: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
