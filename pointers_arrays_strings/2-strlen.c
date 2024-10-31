#include "main.h"
#include <string.h>
/**
 * _strlen - Imprime si es Fizz o Buzz
 *
 * @s: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}
