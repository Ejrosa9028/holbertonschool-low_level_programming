#include "main.h"
#include <string.h>

/**
 * _strspn - Imprime si es Fizz o Buzz
 *
 * @s: recoge el numero del resultado
 *
 * @accept: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *ptr;

	while (*s != '\0')
	{
		ptr = accept;
		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				length++;
				break;
			}

			ptr++;
		}

		if (!*ptr)
		{
			break;
		}
		s++;
	}

	return (length);
}
