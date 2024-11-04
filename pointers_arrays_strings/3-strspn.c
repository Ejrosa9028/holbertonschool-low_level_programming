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
	int length = strspn(s, accept);

	return (length);
}
